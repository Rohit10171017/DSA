#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    int a=n+1,b=n+1;
    int size=2*n+1;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size;j++)
        {
            if(j==a||j==b||j==n+1||i==n+1)
            cout<<"*";
            else 
            cout<<" ";
        }
        if(i<n+1){
        a--;
        b++;}
        else{
            a++;
            b--;
        }
        cout<<endl;
    }
}