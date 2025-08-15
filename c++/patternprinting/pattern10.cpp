#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++)//also we can do this question using extra variable and by flipping it
    {
        for(int j=1;j<=i;j++)
        {
            if((i%2==0&&j%2==0)||(i%2!=0&&j%2!=0))//we  can use (i+j)%2==0 aslo as condition
            cout<<1;
            else 
            cout<<0;
        }
        cout<<"\n";
    }
}