#include<iostream>
using namespace std ;
long long power(int a,int b)
{
  if(b==0) return 1;
  if(b==1) return a;
  int ans = power(a,b/2);
  if(b%2==0)
  return ans*ans;
  else
  return a*ans*ans;
}
int main()
{
    long long x;
    cout<<"enter base : ";
    cin>>x;
    long long y;
    cout<<"enter exponent : ";
    cin>>y;
    if(x==0 && y==0)
    {
        cout<<"Not Defined";
        return 0;
    }
    cout<<x<<" raised to power "<<y<<" is "<<power(x,y);
return 0;
}