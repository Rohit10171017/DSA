#include<iostream>
using namespace std ;
int hcf(int n,int m)
{
    int hcf=1;
    for(int i=min(n,m);i>=1;i--)
    {
        if(n%i==0&&m%i==0)
        {
          hcf=i;
          break;
        }
    }
return hcf;
}
int main()
{
    int n,m;
    cout<<"enter value of n and m : ";
    cin>>n>>m;
    cout<<hcf(n,m);
}