#include<iostream>
#include<vector>
using namespace std;
void sumtriangle(vector<int>&v,int n)
{
    if(n==0) return;
    vector<int>temp(n-1);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
        if(i!=0)
        {
           temp[i-1] = v[i-1] + v[i];
        }
    }
  cout<<"\n";
  sumtriangle(temp,n-1);
}
int main()
{
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>v.at(i);
    }
    sumtriangle(v,n);
    // vector<vector<int>>v2;
    // v2.push_back(v);
    // for(int i=0;i<n-1;i++)
    // {
    //     vector<int>v3;
    //    for(int j=0;j<v2[i].size()-1;j++)
    //    {
    //      int a = v2[i][j] + v2[i][j+1];
    //      v3.push_back(a);
    //    }
    //    v2.push_back(v3);
    // }
    // cout<<"triangle is : \n";
    // for(int i=0;i<n;i++)
    // {
    //     for(int k=0;k<i;k++) cout<<" ";
    //     for(int j=0;j<n-i;j++)
    //     {
    //         cout<<v2[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}