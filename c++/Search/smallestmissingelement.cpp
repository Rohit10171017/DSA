#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter a elements of an array in sorted order : ";
    for(int &ele : arr)
    {
        cin>>ele;
    }
    int low = 0;
    int high = n-1;
    while((low<=high))
    {
        int mid = low + (high-low)/2;
        if(arr[mid] == mid)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout<<low;
    return 0;
}