#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array : ";
    for(int &ele : arr)
    {
        cin>>ele;
    }
    int l = 1;
    int h = n-2;
    while(l <= h)
    {
        int mid = l + (h-l)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
        {
            cout<<arr[mid];
            break;
        }
        else if(arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1])
        {
            l = mid + 1;
        }
        else if(arr[mid] < arr[mid-1] && arr[mid] > arr[mid+1])
        {
            h = mid - 1;
        }
    }
}