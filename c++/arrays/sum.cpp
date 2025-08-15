#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of array elements : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"sum of elements of an array = "<<sum;
    return 0;
}