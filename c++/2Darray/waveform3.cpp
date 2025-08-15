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
    cout<<"column wise wave printing of the matrix is : "<<"\n";
    for(int j=0;j<m;j++)
    {
        if(j%2==0)
        {
           for(int i=0;i<n;i++)
           {
            cout<<a[i][j]<<" ";
           }
        }
        else
        {
            for(int i=n-1;i>=0;i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }
}