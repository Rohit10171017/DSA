#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
   string s;
   cout<<"enter a string : ";
   getline(cin,s);
   stringstream ss(s);
   string temp;
   while(ss>>temp)
   {
      cout<<temp<<"\n";
   }
}