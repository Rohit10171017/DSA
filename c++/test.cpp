#include<iostream>
#include<climits>
using namespace std;
int maximum(int arr[],int n)
{
    if( n < 0 ) return INT_MIN;
    else return max(arr[n],maximum(arr,n-1));
}
int main()
{
    int n;
    cout<<"enter a size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array : ";
    for(int &ele : arr)
    {
        cin>>ele;
    }
    cout<<maximum(arr,n-1);
    return 0;
}