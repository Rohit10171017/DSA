#include<iostream>
#include<vector>
#include<string>
using namespace std;
void subset(string s,string t,int i,vector<string>&v)
{
    if(i==s.size())
    {
        // cout<<t<<endl;
        v.push_back(t);
        return;
    }
   char ch = s[i];
   subset(s,t+ch,i+1,v);
   subset(s,t,i+1,v);
}
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    vector<string>v;
    subset(s,"",0,v);    
    for(string ele : v) // we can use any name in place of ele, like x,n,num,xyz etc
    {
        cout<<ele<<endl;
    }
}