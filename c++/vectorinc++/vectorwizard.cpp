#include<iostream>
#include<vector>
using namespace std ;
int main()
{
  vector<int>v(5,7); // this line means , vector is initialized with sie =5 , and each element in the vector is = 7
 for(int i=0;i<v.size();i++)
 {
    cout<<v[i]<<" ";
 }
 cout<<endl;
 cout<<v.size()<<endl;
 cout<<v.capacity()<<endl;  //capacity and size are same when you initialize directly as above
 return 0;
}