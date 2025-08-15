#include<iostream>
using namespace std ;
int main()
{
    int a,b;
    cout<<"enter value of a : ";
    cin>>a;
    cout<<"enter value of b : ";
    cin>>b;
    int *p1 = &a;
    int *p2 = &b;
    cout<<p1<<endl;
    cout<<p2<<endl;
    cout<<"the sun of two imput numbers is = "<< *p1 + *p2 ;
}