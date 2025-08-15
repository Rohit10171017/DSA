#include<iostream>
#include<vector>
using namespace std ;
void swap(vector<int>&v,int i,int j)
{
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
void reverse(vector<int>&v,int p)         //we can add #include<algorithm> library to use reverse inbuilt function
                                          //if we want to reverse part of array form i to j then we should write as below
{                                              // reverse(v.begin()+i,v.begin()+j+1); where v is vector name
    for(int i=p+1,j=v.size()-1;i<=j;i++,j--)
    {  
        swap(v,i,j);
    }
}

void nxtpermutation(vector<int>&v)
{
    int x = -1 ;
    for(int i=v.size()-2;i>=0;i--)
    {
        if(v[i]<v[i+1] )
        {
            // swap(v,i,i-1);
            x = i;
            break;
        }
    } 
    if(x==-1)
     {
        reverse(v,x);
     }
     else
     {
    reverse(v,x);
    for(int i=x+1;i<v.size();i++)
    {
        if(v[i]>v[x])
        {
            swap(v,x,i);
            break;
        }
    }
}
    
}
int main()
{
 int n;
 cout<<"enter size of an array : ";
 cin>>n;
 vector<int>v(n);
 cout<<"enter elements of an array : ";
 for(int i=0;i<v.size();i++)
 {
    cin>>v.at(i);
 }
 nxtpermutation(v);
 cout<<"the next permutation of an input array is : ";
 for(int i=0;i<v.size();i++)
 {
    cout<<v[i]<<" ";
 }
}
