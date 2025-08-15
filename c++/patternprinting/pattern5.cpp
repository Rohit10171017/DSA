#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        //int a=1;
       for(int j=0;j<=i-1;j++)
       {
        cout<<2*j+1;
       // a+=2;
       }
       cout<<"\n";
    }
}
