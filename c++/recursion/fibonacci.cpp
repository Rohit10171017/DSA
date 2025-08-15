#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==1 || n==2) return 1;
    else return fibo(n-1) + fibo(n-2);
    // int left_ans = fibo(n-1);
    // int right_ans = fibo(n-2);
    // return left_ans + right_ans;
}
int main()
{
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    cout<<"fibonacci series up to "<<n<<" is :";
    for(int i=1;i<=n;i++)
    {
      cout<<fibo(i)<<" ";
    }
    return 0;
}