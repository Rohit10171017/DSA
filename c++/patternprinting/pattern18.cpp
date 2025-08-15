#include<iostream>
using namespace std ;
int main()
{
    int a=0,n;
    cout<<"enter no of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            if((i!=1)&&((j>=n-a)&&(j<=n+a)))
            cout<<" ";
            else
            cout<<j;
        }
        if(i>1)
        a++;
        cout<<endl; 
    }
}