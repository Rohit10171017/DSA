#include<iostream>
#include<vector>
using namespace std;
void subarray (vector<int>&v,int i,vector<int>ans)
{
    if(i==v.size())
    {
        for(int j=0;j<ans.size();j++)
        {
            cout<<ans[j]<<" ";
        }
        cout<<endl;
        return ;
    }
    subarray(v,i+1,ans);
    if(ans.size()==0 || v[i-1]==ans[ans.size()-1])
    {
        ans.push_back(v[i]);
        subarray(v,i+1,ans);
    }
}
int main()
{
    int n;
    cout<<"enter a size of an array : ";
    cin>>n; 
    vector<int>v(n);
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>v.at(i);
    }
    vector<int>ans;
    subarray(v,0,ans);
}