#include<iostream>
using namespace std ;
int main()
{
    int i,n,r,a;
    cout<<"enter the value of n : ";//asking user to give no of terms of GP
    cin>>n;
    cout<<"enter the first number of the gp : ";//asking user to give first term of the GP
    cin>>a;
    cout<<"enter the value of ratio : ";//asking user to give common ratio of the GP
    cin>>r;
    cout<<"the required gp is :"<<endl;
    for(i=1;i<=n;i++)
    {
      cout<<a<<endl;
      a*=r;
    }
}
