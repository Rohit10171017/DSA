#include<iostream>   
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a=i,b=1;
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++)
        {
            int size=((2*i-1)/2)+1;
            cout<<(char)(a+64);
             if(a>1&&b<=size) a--;
             else a++;
             b++;
        }
        cout<<"\n";
    
    }
}