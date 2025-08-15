#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"enter string 1 : ";
    getline(cin,s);
    string t;
    cout<<"enter string 2 : ";
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t)
    {
        cout<<"anagram";
    }
    else{
        cout<<"not anagram";
    }
}