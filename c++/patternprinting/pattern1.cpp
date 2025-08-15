#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the no of rows : \n";
    cin>>n;
    cout<<"enter the no of columns : \n";
    cin>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}