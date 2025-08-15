#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter order of the matrix: ";
    cin>>n;
    cout<<"enter elements of matrix : ";
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    //taking transpose of the matrix
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    //reversing the each column of the matrix
    for(int i=0;i<n;i++)
    {
        int j=0,k=n-1;
        while(j<k)
        {
            int temp = a[i][j];
            a[i][j] = a[i][k];
            a[i][k] = temp;
            j++;
            k--;
        }
    }
    cout<<"matrix after rotating is : "<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}