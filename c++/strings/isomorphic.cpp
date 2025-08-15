#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
  string s;
  cout<<"enter the string : ";
  cin>>s;
  string t;
  cout<<"enter the string : ";
  cin>>t;
  if(s.size() != t.size())
  {
    cout<<"not isomorphic";
    return 0;
  }
  int n = s.size();
  vector<int>v(150,505); // i used 505 as default value because we get problems when we initialize with zero . 
  bool flag = true;
  for(int i=0;i<n;i++)
  {
    int j = (int)s[i];
    if(v[j] == 505) v[j] = s[i] - t[i];
    else if(v[j] != s[i]-t[i])
    {
      flag = false;
      break;
    }
  }
  for(int i=0;i<150;i++)
  {
    v[i] = 505;
  }
   for(int i=0;i<n;i++)
  {
    int j = (int)t[i];
    if(v[j] == 505) v[j] = t[i] - s[i];
    else if(v[j] != t[i]-s[i])
    {
      flag = false;
      break;
    }
  }
  (flag == true) ? cout<<"isomorphic" : cout<<"not isomorphic" ;
  return 0;
}