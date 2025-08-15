#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    int a=1,b=2*n-1;
    int size = 2*n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=size;j++)
        {
            if(j==b||j==a) cout<<"*";
            else cout<<" ";

        }
        b--;
        a++;
        cout<<endl;
    }
}