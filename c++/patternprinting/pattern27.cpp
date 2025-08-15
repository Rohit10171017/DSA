#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    int size1=2*n;
    int size2=2*n-1;
    int a=1,b=size2;
    for(int i=1;i<=size1;i++)
    {
        for(int j=1;j<=size2;j++)
        {
            if((j<=a||j>=b||i==n+1)) 
            cout<<"*";
            else
            cout<<" ";
        }
        if(i<n){
        a++;
        b--;}
        if(i>=n+1)
        {
            a--;
            b++;
        }
        cout<<"\n";
        // if(i>=n+1) {
        //     int  temp=a;
        //     a=b;
        //     b=temp;
        // }
    
    }
}