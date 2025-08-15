#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of rows of pascals trianlge : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int first = 1;
        for(int j=1;j<n-i;j++)
        {
         cout<<" ";
        }
        for(int k=0;k<=i;k++)
        {

            cout<<first<<" ";
            first=first*(i-k)/(k+1);
            
        }
        cout<<endl;
    }
}