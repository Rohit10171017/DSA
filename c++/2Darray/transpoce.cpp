#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter rows of the matrix: ";
    cin>>n;
    int m;
    cout<<"enter columns of the matrix: ";
    cin>>m;
    cout<<"enter elements of matrix : ";
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"transpoce of the matrix is : "<<endl;
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    

}