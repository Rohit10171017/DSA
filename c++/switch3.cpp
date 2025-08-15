#include<iostream>
using namespace std ;
int main()
{
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operator"<<endl;
    cin>>op;
    switch(op)
    {
        case '+':
        cout<<"the sum of the two numbers = "<<a+b;
        break;
        case '-':
        cout<<"difference between two numbers = "<<a-b;
        break;
        case '*':
        cout<<"the product of two numbers = "<<a*b;
        break;
        case '/':
        if(b==0)
        cout<<"not defined output";
        else
        cout<<"the devision between two numbers = "<<a/b;
        break;
        default :
        cout<<"invalid operator ";
        break;
        }

    
}