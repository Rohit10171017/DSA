#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of the string : ";
    cin>>n;
    char str[n];
    cout<<"enter a string : ";
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int noOfvowels = 0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        noOfvowels++;
    }
    cout<<noOfvowels;
}