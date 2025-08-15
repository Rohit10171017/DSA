#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    // string s = "leetcode";
    vector<int>v(26,0);
    for(int i=0;i<s.size();i++)
    {
        char ch = s[i];
        int ascii = (int)ch;
        v[ascii-97]++;
    }
    int max = 0;
    for(int i=0;i<26;i++)
    {
        if(v[i]>max)
        max = v[i];
    }
    for(int i=0;i<26;i++)
    {
        if(v[i]==max)
        {
            cout<<(char)(97+i)<<" - "<<max<<endl;
        }
    }

}
