#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of elements of an array :";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    bool flag = false;
    cout<<"enter element to be searched : ";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
           flag=true;
           break;
        }
    }
    if(flag==true)
    {
        cout<<"the element to be searched is found at index ";
    }
    else
    {
        cout<<"element not found ";
    }
    return 0;
}