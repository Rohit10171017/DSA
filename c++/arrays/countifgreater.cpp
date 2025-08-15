#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
         if(arr[i]>max)   max = arr[i];
    }
    cout<<"the maximum value in the array is : "<<max;

    return 0;
}