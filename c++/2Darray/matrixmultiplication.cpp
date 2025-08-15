#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter rows of the matrix 1 : ";
    cin>>n;
     int m;
    cout<<"enter columns of the matrix 1 : ";
    cin>>m;
     int p;
    cout<<"enter rows of the matrix 2 : ";
    cin>>p;
     int q;
    cout<<"enter columns of the matrix 2 : ";
    cin>>q;
    if(m==p)
    {
       int a[n][m];
       cout<<"enter elements of the matirx 1 : ";
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
       }
       int b[p][q];
       cout<<"enter elements of the matirx 2 : ";
       for(int i=0;i<p;i++)
       {
        for(int j=0;j<q;j++)
        {
            cin>>b[i][j];
        }
       }
       int res[n][q];
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<q;j++)
        {
            res[i][j]=0;
            for(int k=0;k<m;k++)
            {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
       }
       cout<<"the resultant matrix after multiplication is : \n";
         for(int i=0;i<n;i++)
       {
        for(int j=0;j<q;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<"\n";
       }

    }
    else
    cout<<"multiplication of the matrix is not possible";
}


