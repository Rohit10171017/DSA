#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void nextperm(vector<int>&v)
{
  int n = v.size()-1;
  int x = -1;

for(int i = n ; i >=1 ; i--)
{
  if(v[i-1] < v[i]){
    x = i - 1;
    break;
  }
}
if( x == -1) reverse(v.begin(),v.end());
else{
  reverse(v.begin()+x+1,v.end());
  for(int i = x + 1 ; i <= n ; i++)
  {
    if(v[i] > v[x]) 
    {
      swap(v[i],v[x]);
      break;
    }
  }
}
}
int main()
{
  int n;
  cout<<"Enter the size of an aray : ";
  cin>>n;
  vector<int>v(n);
  cout<<"enter a elements of an array : ";
  for(auto &ele : v)
  {
    cin>>ele;
  }
  nextperm(v);
  for(auto ele : v)
  {
    cout<<ele<<" ";
  }
}