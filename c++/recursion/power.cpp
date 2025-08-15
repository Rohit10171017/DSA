#include<iostream>
using namespace std;
long long power(int a,int b)
{
    if(b==0) return 1;
    else return a*power(a,b-1);
}
int main()
{
    int a,b;
    cout<<"enter the base : ";
    cin>>a;
    cout<<"enter the power : ";
    cin>>b;
    if(a==0 && b==0)
    {
        cout<<"Not Defined";
        return 0;
    }
    long long ans = power(a,b);
    cout<<a<<" raised to the power "<<b<<" is "<<ans;
    return 0;
}