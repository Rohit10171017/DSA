#include<iostream>
using namespace std;
int main()
{
  string s,p,r;
  cout<<"enter a initial string : ";
  getline(cin,s);
  cout<<"enter a pattern string : ";
  getline(cin,p);
  cout<<"Enter a replacements string : ";
  getline(cin,r);
  int k = 0;
  int l = 0;
  bool flag ;
  string result = "";
  for(int i = 0 ; i < s.length() ; i++)
  {
    if(s[i] == p[k++])
    {
      l++;
      flag = true;
    }
    else 
    {
      flag == false;
      k = 0;
    }
    if(l == 0){
      result += s[i];
      k = 0;
    }
    if(l == p.length() && flag == true)
    {
      result += r;
      l = 0;
      k = 0;
    }
    else if(flag == false && l != 0){
      result += s.substr(i-l,l);
      l = 0;
      k = 0;
    }
  }
  cout<<result;
}