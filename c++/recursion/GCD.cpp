#include<iostream>
using namespace std;
long long GCD(long long a ,long long b)
{
    if(b % a == 0) return a;
    else return GCD(b%a,a);
}
int main()
{
    long long a;
    cout<<"enter value of a : ";
    cin>>a;
    long long b;
    cout<<"enter a value of b : ";
    cin>>b;
    long long hcf = GCD(min(a,b),max(a,b));
    cout<<hcf;
}