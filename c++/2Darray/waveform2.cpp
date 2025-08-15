#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter rows of the matrix : ";
    cin>>n;
    int m;
    cout<<"enter columns of the matrix : ";
    cin>>m;
    int a[n][m];
    cout<<"enter elements of the matrix : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"the requires wave form printing of matrix elements : "<<"\n";
    for(int i=n-1;i>=0;i--)
    {
        if(i%2==0)
        {
            for(int j=m-1;j>=0;j--)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
    
}