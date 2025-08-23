#include<iostream>
#include<climits>
using namespace std;
int print(int arr[],int n)
{
    if(n<0) 
    {
        return INT_MIN;
    }
    return max(arr[n],print(arr,n-1));

}
int main()
{
    int n;
    cout<<"enter size of an array  : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>i[arr];
    }
    cout<<"\n";
    cout<<print(arr,n-1);
}