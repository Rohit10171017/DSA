#include<iostream>
using namespace std;           // check commented code also 
// void reverse(int a[],int n)
// {
//     if(n<0) return ;
//     cout<<a[n]<<" ";
//     reverse(a,n-1);
// }
void reversearray(int a[],int n,int i)
{
    if(i>=n)
    {
        return;
    }
    swap(a[i],a[n]);
    reversearray(a,n-1,i+1);
}
int main()
{
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    // reverse(arr,n-1);
    reversearray(arr,n-1,0);
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
}