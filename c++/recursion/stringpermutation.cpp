#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
void stringpermutation(string t , string s)
{
    if(s=="")
    {
        cout<<t<<endl;
        return ;
    }
    for(int i=0;i<s.size();i++)
    { 
            string left = s.substr(0,i);
            string right = s.substr(i+1);
            stringpermutation(t+s[i],left+right);
    }
}
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    stringpermutation("",s);
}