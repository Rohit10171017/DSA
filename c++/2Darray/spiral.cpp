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
    cout<<"enter elements of an matrix : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int minr=0,maxr=n-1,minc=0,maxc=m-1;
    while (maxr>=minr && maxc>=minc)
    {
        for(int i=minc;i<=maxc;i++)
        {
            cout<<a[minr][i]<<" ";
        }
        minr++;
        if(minr>maxr) break;
        for(int i=minr;i<=maxr;i++)
        {
            cout<<a[i][maxc]<<" ";
        }
        maxc--;
        if(maxc<minc) break;
        for(int i=maxc;i>=minc;i--)
        {
            cout<<a[maxr][i]<<" ";
        }
        maxr--;
        if(maxr<minr) break;
        for(int i=maxr;i>=minr;i--)
        {
            cout<<a[i][minc]<<" ";
        }
        minc++;
        if(minc>maxc) break;
    }
}