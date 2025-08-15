#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number to get factotial : ";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
        cout<<i<<"!"<<"="<<fact<<endl;
    }
   // cout<<"the factorial of the input number is = "<<fact;
}