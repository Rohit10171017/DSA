#include<iostream>
using namespace std ;
int factorial(int n)//used fuction because of repeated factorial calculation
{
    int fact=1;
    for(int i=2;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int combination(int n,int r)//used function because of repeated combination calculation
{
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}
int main()
{
    int n;
    cout<<"enter no of rows : ";//asking user to give no of rows of pascals triangle and taking input
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        cout<<" ";
        for(int k=0;k<=i;k++)
        {
            cout<<combination(i,k)<<" ";
        }
        cout<<"\n";
    }
}