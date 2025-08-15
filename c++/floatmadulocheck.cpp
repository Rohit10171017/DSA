#include<iostream>
using namespace std ;
int main()
{
    int a,b;
    cout<<"enter values of a and b";
    cin>>a>>b;
    int c = a % b;//when we store a and b in float and try to find reminder ,compiler shows error.
    cout<<c;
}