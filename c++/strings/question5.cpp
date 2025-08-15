#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<climits>
using namespace std;
int main()
{
   string s = "123 12 094 567  9864 00124 ";
   stringstream ss(s);
   string temp;
   vector<string>v;
   while(ss>>temp)
   {
    v.push_back(temp);
   }
   int max = INT_MIN;
   for(int i=0;i<v.size();i++)
   {
      int x = stoi(v[i]);
      if(x>max)
      max = x;
   }
   cout<<max;

}