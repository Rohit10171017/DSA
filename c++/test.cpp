#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std ;
void subsetduplicate(string s,string t,bool flag)
{
    if(s.length()==0)
    {
        cout<<t<<"\n";
        return ;
    }
    if(s.length() == 1)
    {
        if(flag == true) subsetduplicate(s.substr(1),t+s[0],true);
        subsetduplicate(s.substr(1),t,true);
    }
    else if(s[0] == s[1])
    {
        if(flag == true) subsetduplicate(s.substr(1),t+s[0],true);
        subsetduplicate(s.substr(1),t,false);
    }
    else{
        if(flag == true) subsetduplicate(s.substr(1),t+s[0],true);
        subsetduplicate(s.substr(1),t,true);
    }
}
int main()
{
    string s;
    cout<<"enetr a string : ";
    getline(cin,s);
    sort(s.begin(),s.end());
    subsetduplicate(s,"",true);
}