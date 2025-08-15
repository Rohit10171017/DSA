#include<iostream>
using namespace std ;
void swap(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return;
}
int main()
{
    int a,b;
    cout<<"enter value of a : ";
    cin>>a;
    cout<<"enter value of b : ";
    cin>>b;
    swap(a,b);
    cout<<"a = "<<a;
    cout<<"\n";
    cout<<"b = "<<b;
    return 0;
}