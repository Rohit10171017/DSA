#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void subset(string t , string s, int i,bool flag)
{
    if(i==s.size())
    {
        cout<<t<<endl;
        return ;
    }
    if(i==s.size()-1)
    {
        if(flag == true) subset(t+s[i],s,i+1,true);
        subset(t,s,i+1,true);
        return ;
    }
    if(s[i]==s[i+1])
    {
        if(flag == true) subset(t+s[i],s,i+1,true);
        subset(t,s,i+1,false);
    }
    else
    {
        if(flag == true) subset(t+s[i],s,i+1,true);
        subset(t,s,i+1,true);
    }
}
int main()
{
    string s;
    cout<<"enter a string : "; 
    getline(cin,s);
    sort(s.begin(),s.end());
    subset("",s,0,true);
}