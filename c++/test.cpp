#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array(according to the condition)";
    for(int &ele : arr)
    {
        cin>>ele;
    }
    int x ;
    cout<<"enter a element to find its index : ";
    cin>>x;
    int l = 0;
    int h = n-1;
    while(l <= h)
    {
        int mid = (l + h)/2;
        if((arr[mid] == x && arr[mid] >arr[mid-1]) || mid == 0)
        {
            cout<<mid;
            break;
        }
        else if(arr[mid] > x ||(arr[mid] == x && arr[mid] == arr[mid-1]))
        {
            h = mid-1;
        }
        else if(arr[mid]< x)
        {
            l = mid + 1;
        }
    }
    return 0;
}