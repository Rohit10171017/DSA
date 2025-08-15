#include<iostream>
using namespace std ;
int main()
{
    int a,b;
    cout<<"enter value of a : ";
    cin>>a;
    cout<<"enter value of b : ";
    cin>>b;
    int temp = a;
    a = b ;
    b = temp;
    cout<<"value of a is = "<<a<<endl;
    cout<<"value of b is = "<<b;
    return 0;
}
