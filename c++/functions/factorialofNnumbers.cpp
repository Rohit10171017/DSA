#include<iostream>
using namespace std ;
int factorial(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"the factorial of "<<i<<" is equal to : "<<factorial(i)<<endl;
    }
}