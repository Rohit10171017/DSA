#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter a elements of an array in sorted order : ";
    for(int & ele : arr)
    {
        cin>>ele;
    }
    int target;
    cout<<"enter a target : ";
    cin>>target;
    int low = 0;
    int high = n-1;
    int idx;
    while(low<=high)
    {
        int mid = (low + high)/2;
        if(target < arr[mid])
        {
            high = mid-1;
        }
        else if(target > arr[mid])
        {
            low = mid+1;
        }
        else if(target == arr[mid])
        {
            idx = mid;
        }
    return 0;     
}