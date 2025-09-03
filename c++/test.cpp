#include<iostream>
#include<vector>
using namespace std ;
void subarray(vector<int>&v,vector<int>ans,int i)
{
    if(i == v.size())
    {
        for(auto ele : ans)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
        return ;
    }
    subarray(v,ans,i+1);
    if(ans.size() == 0 || v[i-1] == ans[ans.size()-1])
    {
        ans.push_back(v[i]);
        subarray(v,ans,i+1);
    }
}
int main()
{
    int n;
    cout<<"enter a size of an array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of an vector :";
    for(auto &ele : v)
    {
        cin>>ele;
    }
    vector<int>ans;
    subarray(v,ans,0);
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i;j<n;j++)
    //     {
    //         for(int k=i;k<=j;k++)
    //         {
    //             cout<<v[k]<<" ";
    //         }
    //         cout<<endl;
    //     } 
    // }
}