#include<iostream>
#include<vector>
using namespace std ;
void change(vector< vector<int> >&v)
{
    v[0][1] = 10;
}
int main()
{
  int n ;
  cout<<"enter no of 1d vectors you want to add in 2D vector :";
  cin>>n;
  int m;
  cout<<"enter size of an each 1d vector : ";
  cin>>m;
  vector< vector<int> >v(n,vector<int>(m,5));
  change(v);
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
   }


}