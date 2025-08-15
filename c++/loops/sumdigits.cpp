#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter a number\n";
    cin>>n;
    int sum=0,rem;
    if(n==0)
    cout<<0;
    else
    {
        while(n>0)
        {
           rem=n%10; 
           sum+=rem;
           n/=10;
        }
        cout<<"The sum of the digits in a input number is = "<<sum;
    }
}