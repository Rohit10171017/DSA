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
    vector<int>v(150);
    for(int i=0;i<s.size();i++)
    {
        v[(int)s[i]]++;
    }
    int max = 0;;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>max) max = v[i];
    }  
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==max) cout<<(char)(i)<<"->"<<max<<"\n";
    }
    return 0;
}