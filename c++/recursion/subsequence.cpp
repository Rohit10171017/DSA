#include<iostream>
#include<vector>
using namespace std;
void subset( vector<int>&v1,vector<int>v,int i,int k)
{ 
    if(i==v1.size())
    {
        if(v.size()==k)
        {
        for(int j=0; j<v.size(); j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
        }
        return ;
    }
    if(v1.size()+(v.size()-i)<k) return ;
    subset(v1,v,i+1,k);
    v.push_back(v1[i]);
    subset(v1,v,i+1,k);
}
int main()
{
    int n;
    cout<<"enter a size of an array : ";
    cin>>n;
    vector<int>v1(n);
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    int k;
    cout<<"enter a length of the subsequences : ";
    cin>>k;
    vector<int>v;
    subset(v1,v,0,k);
}