#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  cout<<"enter a string: ";
  getline(cin,s);
  int n = s.length();
  if(n%2==0)
  {
  reverse(s.begin(),s.begin() + (n/2));
  cout<<s;
  }
  else{
    cout<<"enter a string of even no of characters ";
  }
}