#include<iostream>
#include<vector>
using namespace std;
void traverse(vector<int>&v,int n)
{
    if(n<0) return;
    traverse(v,n-1);
    cout<<v[n]<<" ";
}
int main()
{
    // int a[50];
    int n ;
    cout<<"enter no of elements of an array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
       cin>>v.at(i);
    }
    traverse(v,n-1);
}