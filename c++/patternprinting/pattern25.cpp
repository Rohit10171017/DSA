#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    int a=n,b=n;
    int size = 2*n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=size;j++)
        {
            if(j==a||j==b)
            cout<<i;
            else 
            cout<<" ";
        }
        a--;
        b++;
        cout<<endl;
    }
}