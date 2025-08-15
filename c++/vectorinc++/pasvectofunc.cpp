#include<iostream>
#include<vector>
using namespace std ;
void change(vector<int>&w)
{
    // cout<<"output inside the function : ";           note :
    w[0]=50;                                            // vectors to function works like pass by value  
//     for(int i=0;i<w.size();i++)                      // entire vector gets copied to function . 
//   {                                                  // so we can't access original vector inside the called function
//     cout<<w.at(i)<<" ";                              // solution for that problem is "using '&' like we used in this code"
//   }
// cout<<"\n";

}
int main()
{
  vector<int>v(5);
  cout<<"enter elements of the vector : ";
  for(int i=0;i<v.size();i++)
  {
    cin>>v.at(i);
  }
  cout<<"output before function : ";
  for(int i=0;i<v.size();i++)
  {
    cout<<v.at(i)<<" ";
  }
  cout<<"\n";
  change(v);
  cout<<"output after function call : ";
  for(int i=0;i<v.size();i++)
  {
    cout<<v.at(i)<<" ";
  }


}