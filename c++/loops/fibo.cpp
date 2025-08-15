#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter the number to print fibonacci series : ";
    cin>>n;
    int fibo=1,fibo1=0,fibo2=0;
    for(int i=1;i<=n;i++)
    {
        if(i==1||i==2)
        {
            cout<<1<<" ";
            fibo1=1;
            fibo2=1;
        }
        if(i>2)
        {   
            fibo=fibo1+fibo2;
            cout<<fibo<<" ";

        }
        fibo1=fibo2;
        fibo2=fibo;
        
        
        
    }
}