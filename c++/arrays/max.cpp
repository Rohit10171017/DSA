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
    int x;
    cout<<"enter value to be compared with array elements : ";
    cin>>x;
    int count = 0;
    for(int i=0;i<n;i++)
    {
         if(arr[i]>x)  count++;
    }
    cout<<"the number of elements greater than "<<x<<" are "<<count;

    return 0;
}
