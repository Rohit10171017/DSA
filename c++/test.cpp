#include<iostream>
#include<vector>
using namespace std;
void arraytriangle(vector<int>&v,int n)
{
  if(n==1) 
  {
    cout<<v[0]<<endl;
    return ;
  }
  vector<int>temp(n-1);
  for(int i = 0 ; i < v.size() ; i++)
  {
    cout<<v[i]<<" ";
    if(i < v.size()-1) temp[i] = v[i]+v[i+1];
  }
  cout<<endl;
  arraytriangle(temp,n-1);
}
int main()
{
  int n ;
  cout<<"enter the size of array : ";
  cin>>n;
  vector<int>v(n);
  cout<<"Enter elements of an array : ";
  for(auto &ele : v)
  {
    cin>>ele;
  }
  arraytriangle(v,n);
}
