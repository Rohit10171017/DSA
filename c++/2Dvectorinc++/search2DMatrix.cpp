#include<iostream>
#include<vector>
using namespace std ;
bool search(vector<vector<int>>&v,int x)
{
    if(v.empty()||v[0].empty())
    {
        return false;
    }
    int n = v.size();
    int m = v[0].size();
    int i = 0;
    int j = m-1;
    while(i<n && j>=0)
    {
        if(v[i][j] == x)  return true;
        else if(v[i][j] > x) j--;
        else i++;
    }
return false;
}
int main()
{
  int n;
  cout<<"enter no of rows of the matrix : ";
  cin>>n;
  int m;
  cout<<"enter no of columns of the matrix : ";
  cin>>m;
  vector<vector<int>>v(n,vector<int>(m));
  cout<<"enter elements of the matrix according to given condition: ";
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        cin>>v[i][j];
    }
  }
  int x;
  cout<<"enter target : ";
  cin>>x;
  bool flag = search(v,x);
  
  if(flag == true)
   cout<<"the target "<<x<<" is found";
  else   
   cout<<"the target "<<x<<" is not found";

   return 0;

}
