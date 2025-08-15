#include<iostream>
#include<vector>
using namespace std;
void subset( vector<int>&v1,vector<int>v,int i)
{ 
    if(i==v1.size())
    {
        for(int j=0; j<v.size(); j++)
        {
            cout<<v[j]<<" ";
        }
        cout<<endl;
        return ;
    }
        
    subset(v1,v,i+1);
    v.push_back(v1[i]);
    subset(v1,v,i+1);
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
   
    vector<int>v;
    subset(v1,v,0);
}