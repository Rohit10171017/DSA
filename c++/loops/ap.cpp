#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter the value of n : ";//asking user to give no of terms of AP
    cin>>n;
    for(int i=1;i<=2*n-1;i+=2)
    {
        cout<<i<<"\n";
    }
}