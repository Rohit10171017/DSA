#include<iostream>
#include<string>
using namespace std;
int main()
{
  string s;
  cout<<"enter the srting which only consists numbers : ";
  getline(cin,s);
  int num = 0;
  for(int i=0;s[i] != '\0';i++)
  {
    int A = (int)s[i];
    num = num*10 + (A-48);
  }
  cout<<num;
  return 0;
}