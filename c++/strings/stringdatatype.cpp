#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string str = "ROHIT SUBHAS JADHAV";
    // cout<<str<<endl;
//     cout<<str[4];
   string s;
   cout<<"enter a string : ";
//    cin>>s; // only if the given string has no spaces(only while taking input)
   getline(cin,s);// this works even if input string consists spacess
   cout<<"the input string is : "<<s;
 }