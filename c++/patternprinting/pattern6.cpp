#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            //char ch=(char)64+j;
            cout<<(char)(64+j)<<" ";//if you don't put j+64 in bracket compiler will print corresponding ASCI values of alphabet
        }
        cout<<endl;
    }
}