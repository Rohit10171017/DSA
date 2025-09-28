#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
void permutation(string s,string t)
{
    if(s == "")
    {
        cout<<t;
        cout<<endl;
        return ;
    }
    for(int i=0;i<s.size();i++)
    {
        permutation(s.substr(0,i)+s.substr(i+1,s.length()-i-1),t+s[i]);
    }
}
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    permutation(s,"");
}