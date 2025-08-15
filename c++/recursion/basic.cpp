#include<iostream>
using namespace std;
void greet(int n)
{
    if(n==0) return;
    cout<<"GOOD MORNING\n";
    greet(n-1);
}
int main()
{
    int n;
    cout<<"enter no of times you want to print good morning : ";
    cin>>n;
    greet(n);
    return 0;
}