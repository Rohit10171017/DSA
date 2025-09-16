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
    cout<<"enter a target which is not in the array : ";
    cin>>target;
    int low = 0;
    int high = n-1;
    bool flag = true ;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] ==target)
        {
            flag = false;
            cout<<arr[mid-1];
            break;
        }
        else if(target < arr[mid])
        {
            high= mid - 1;
        }
        else if(target > arr[mid])
        {
            low = mid + 1 ;
        }
    }
    if(flag == true)
    cout<<arr[high];
    return 0;   
}