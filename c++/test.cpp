#include<iostream>
using namespace std;
int stair(int n)
{
  if( n == 0 ) return 0;
  if(n == 1 | n == 2) return n;
  else return stair(n-1) + stair(n-2);

}
int main()
{
  int n ;
  cout<<"Enter no of steps: ";
  cin>>n;
  int ans = stair(n);
  cout<<ans;
  return 0;
}