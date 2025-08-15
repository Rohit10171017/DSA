#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n; 
    if(n%5==0&&n%3==0)
    {
        cout<<"the input number is divisible by both 5 and 3";

    }
    else
    {
        cout<<"the input number is not divisible by both 5 and 3";
    }
}