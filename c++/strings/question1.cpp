#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a no : ";
    cin>>n;
    char str[n];
    cout<<"enter a string : ";
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0) str[i] = 'a';
    }
    for(int i=0;i<n;i++)
    {
        cout<<str[i];
    }
    
}