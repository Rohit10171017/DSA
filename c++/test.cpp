#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"subarrays of the given array : ";
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<"\n";
        }
    }
}