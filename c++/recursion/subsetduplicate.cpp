#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(vector<int>&v,vector<int>ans,int i)
{
    if(i == v.size())
    {
        for(int j=0;j<ans.size();j++) 
        {
            cout<<ans[j]<<" ";
        }
        cout<<endl;
        return ;
    }
    ans.push_back(v[i]);
    subset(v,ans,i+1);
    ans.pop_back();
    if(v[i] == v[i+1] && i != v.size()-1)
    {
        while(v[i] == v[i+1]) i++;
    }
    subset(v,ans,i+1);
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    subset(v,{},0);
    return 0;
}