#include<iostream>
using namespace std ;
int main()
{
    int m,n;
    cout<<"enter no of rows : ";
    cin>>m;
    cout<<"enter no of columns: ";
    cin>>n;
    int a[m][n];
    cout<<"enter elements of array ";
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
        cin>>a[i][j];
       }
    }
    cout<<"the two dimensional array is :\n";
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
        cout<<a[i][j]<<" ";
       }
       cout<<endl;
    }
}