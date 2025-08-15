#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    int size = 2*n-1;
    int a=1;
    for(int i=1;i<=size;i++)
    {
       for(int j=1;j<=a;j++)
       {
          cout<<"*";
       }
       if(i<n) a++;
       else a--;
       cout<<"\n";
    }
}