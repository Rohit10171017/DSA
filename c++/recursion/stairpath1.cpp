#include<iostream>
using namespace std;
int staircase(int n)
{
    if(n==0) return 0;
    if(n==2 || n==1) return n;
    else return staircase(n-1) + staircase(n-2) ;
}
int main()
{
    int n;
    cout<<"enter no of stairs : ";
    cin>>n;
    cout<<staircase(n);
    return 0;
}