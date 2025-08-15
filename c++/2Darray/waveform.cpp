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
    for(int i=0;i<n;i++)
    {
            if(i%2 == 0)
            continue;
            else
            {
             int j=0,k=m-1;
             while(j<k)
             {
                int temp = a[i][j];
                a[i][j] = a[i][k];
                a[i][k] = temp;
                j++;
                k--;
             }
            }
        }
        cout<<"the wave form printing of the elements of the matrix is : ";
         for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        }
    }
