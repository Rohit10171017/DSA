#include<iostream>
using namespace std ;
void access (int *a,int size) // by just receving adress of an array we can access entire array
{
    //int size = sizeof(a)/sizeof(a[0]); //this will give error.
   // cout<<size;
    for(int i=size-1;i>=0;i--)
    {
        cout<<a[i]<<" ";
    } 
}
void change (int b[] ,int size) //technically b[] is pointer which is receving address of an array 
{
    for(int i=0;i<=size-1;i++)
    {
        b[i]+=1;
    }
}


int main()                                   //always prefer to send size of array to the function with array 
{
    int a[]={1,2,3,4,5,6,7,8,9,0};
    int size = sizeof(a)/sizeof(a[0]);
    //cout<<size;
    access(a,size);
    cout<<"\n";
    change(a,size);
    for(int i=0;i<=9;i++)
    {
        cout<<a[i]<<" ";
    }
}