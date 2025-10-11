#include<iostream>
using namespace std;
void perm(string s,string t)
{
    if(s == "")
    {
        cout<<t<<endl;
        return ;
    }
    for(int j=0;j<s.size();j++)
    {
        perm(s.substr(0,j)+s.substr(j+1,s.size()-j-1),t+s[j]);
    }
}
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    perm(s,"");
}