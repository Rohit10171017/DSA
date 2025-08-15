#include<iostream>
using namespace std ;
void transpoce(int a[][50],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}
int main()
{
    int n;
    cout<<"enter order of a matrix : ";
    cin>>n;
    int a[50][50];
    cout<<"enter elements of matrix : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    transpoce(a,n);
    cout<<"transpose of the matrix is : "<<endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


}