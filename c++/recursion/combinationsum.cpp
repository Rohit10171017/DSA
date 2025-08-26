#include<iostream>
#include<vector>
using namespace std;
void function(vector<int>&v,vector<vector<int>>&ans,vector<int>sub,int x,int i)
{
    if(x < 0) return ;
    else if(x == 0)
    {
        ans.push_back(sub);
        return ;
    }
    for(int j=i;j<v.size();j++)
    {
        sub.push_back(v[j]);
        function(v,ans,sub,x-v[j],j);
        sub.pop_back();
    }
}
int main()
{
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int x;
    cout<<"enter a target : ";
    cin>>x;
    vector<vector<int>> ans;
    vector<int>sub;
    function(v,ans,sub,x,0);
    cout<<"required combinations are : \n";
    for(auto &arr : ans)
    {
        for(auto ele :arr)
        {
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
}