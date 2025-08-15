#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream t(s);
    string temp;
    string r = "";
    while(t>>temp)
    {
        if (temp.empty()) continue;
        int x = (int)temp[0];
        if(x>=65 && x<=90)
        {
            temp[0] = (char)(x+32);
        }
        if((x>=65 && x<=90) || (x>=97 && x<=122))
        {
            r += temp;
        }
    }
    string rev = r;
    reverse(rev.begin(), rev.end());
    if (r == rev)
    {
        cout<<"palindrome";
    }
    else 
    {
        cout<<"not palindrome";
    }
}