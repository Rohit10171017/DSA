#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    int size=2*n-1;
    int a=n,b=n;
    for(int i=1;i<=size;i++)
    {
        for(int j=1;j<=size;j++)
        {
             if((i!=1&&i!=size)&&(j>a&&j<b))
             cout<<" ";
             else
             cout<<"*";
        }
        if(i<n){

            a--;
            b++;
        }
        else{
            b--;
            a++;
        }
        cout<<"\n";
    }
}