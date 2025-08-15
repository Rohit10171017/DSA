#include<iostream>
using namespace std ;
int main()
{
    int n,a,b;
    cout<<"enter no of rows : ";
    cin>>n;
    for(int i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        {
         a=2*i-1;
         b=n-i;
        }
         else
         {
         a-=2;
         b++;
         }
        
        for(int j=1;j<=b;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=a;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}