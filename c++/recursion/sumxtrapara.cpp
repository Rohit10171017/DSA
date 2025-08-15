#include<iostream> // finding sum from 1 to n with using xtra parameter
using namespace std ;
int sum1toN(int sum,int n)
{
    if(n==0) return sum;
    else return sum1toN(sum+n,n-1);
}
int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int s = sum1toN(0,n); 
    cout<<s;
    return 0;
}