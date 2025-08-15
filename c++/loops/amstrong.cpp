#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"the armstrong numbers between 1-500 are : \n";
    for(i=1;i<=500;i++)
    {
        int d=0,sum=0;
        int j=i;
        while(j>0)
        {
             d=j%10;
             sum+=d*d*d;
             j/=10;
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
    }
}