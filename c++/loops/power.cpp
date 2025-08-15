#include<iostream>
using namespace std ;
int main()
{
    int a,b;
    cout<<"enter the value of base : ";
    cin>>a;
    cout<<"enter the value of the power : ";
    cin>>b;
    int power=1;
    for(int i=1;i<=abs(b);i++)//abs() is used to convert value to positive if it is negative
    {
        power*=a;
    }
    if(a ==0 && b == 0)
    cout<<"not defined";
     else if(b>=0)
    cout<<"value of "<<a<<" to the power "<<b<<" is = "<<power;
    else
    cout<<"value of "<<a<<" to the power "<<b<<" is = "<<1.0/power;
    
}