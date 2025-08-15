#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of elements in an array : ";
    cin>>n;
    int a[n];
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag==true) cout<<"dublicate element is present in an array: ";
    else cout<<"duplicate element is not present in an array : ";

}