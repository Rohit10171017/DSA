#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
 string s;
 cout<<"enter a string : ";
 getline(cin,s);
 sort(s.begin(),s.end()); //this works on the basis of ASCII value
 cout<<s;
 return 0;
}