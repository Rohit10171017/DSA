#include<iostream>
using namespace std;
long long factorial(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return  n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"enter the value of n to get factorial : ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
    long long fact = factorial(i);
    cout<<i<<"!"<<" = "<<fact<<endl;
    }
    // cout<<"The factorial of the input number is "<<n<<"!"<<" = "<<fact;
    return 0;
}