#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number\n";
    cin>>n;
    int count=0;
    if(n==0)
    cout<<1;
    else{
    while(n>0)
    {
        n/=10;
        count++;
    }
    cout<<"the number of digits in a input number are : "<<count;
}
}