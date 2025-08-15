#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a=0;
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
             if(k<=i)
             a++;
             else
             a--;
             cout<<a;
        }
        cout<<"\n";
    }
}