#include<iostream> //finding sum from 1 to n without using xtra parameter
using namespace std ;
int sum(int n)
{
    if(n==0) return 0;
    else return n + sum(n-1);
}
int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int s = sum(n); 
    cout<<s;
    return 0;
}