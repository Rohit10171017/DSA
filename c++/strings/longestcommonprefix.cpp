#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"enter a size of the string array : ";
    cin>>n;
    vector<string>s(n);
    cout<<"enter a string : ";
    for(int i=0;i<s.size();i++)
    {
        cin>>s[i];
    }
    sort(s.begin(),s.end());
    // int x = s[0].size();
    // int y = s[s.size()-1].size();
    // int z = min(x,y);
    // int j=1;
    int n = s.size();
    string s1 = s[0];
    string s2 = s[n-1];
    string sp = "";
    for(int i=0;i<(min(s1.size(),s2.size()));i++)
    {
    // string s1 = s[0].substr(0,j);
    // string s2 = s[s.size()-1].substr(0,j);
    // if(s1 == s2)
    // {
    //    sp = s1;
    //    j++;
    // }
    // else{
    //     break;
    if(s1[i]==s2[i])
       {
          sp += s1[i];
       }
    else{
        break;
         }
    }
    cout<<sp;
}
    
