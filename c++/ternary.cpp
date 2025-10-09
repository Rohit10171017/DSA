#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n ;
    cout<<"enter size of an string array ; ";
    cin>>n;
    vector<string>v(n);
    cout<<"enter strings : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    string s = v[0];
    string t = v[n-1];
    string ans = "";
    for(int i = 0;i<min(s.length(),t.length());i++)
    {
        if(s[i]==t[i]) ans += s[i];
        else break;
    }
    cout<<ans;
    return 0;
}