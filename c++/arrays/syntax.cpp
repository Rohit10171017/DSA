#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of elements of an array : ";
    cin>>n;
    int a[n];
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"elements of an array are : ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}