#include<iostream>
#include<vector>
using namespace std ;
int main()
{
  vector<int>v;   //size   capacity
  v.push_back(1); // 1        1           -when we do popback the element from the last of the vector gets deleted 
  v.push_back(2); // 2        2             ,like we can see in this codes output. 
  v.push_back(3); // 3        4
  v.push_back(4); // 4        4           -after doing popback the size of the vector changes but capcity of the vector remains same
  
  v.push_back(5); // 5        8            "to understand above lines please run the code and observe output and compare output before popback and after popback"
  v.push_back(6); // 6        8
  v.push_back(7); // 7        8
  v.push_back(8); // 8        8
  v.push_back(9); // 9        16
  v.push_back(10);// 10       16
  v.push_back(11);// 11       16
  v.push_back(12);// 12       16
  v.push_back(13);// 13       16
  v.push_back(14);// 14       16
  v.push_back(15);// 15       16
  v.push_back(16);// 16       16 
  v.push_back(17);// 17       32

  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }
  
  cout<<"\n";

  cout<<"size is : "<<v.size()<<"\n";
  cout<<"capacity is : "<<v.capacity()<<"\n";

  v.pop_back();
   v.pop_back();
    v.pop_back();
     v.pop_back();
      v.pop_back();
      
      cout<<"output after doing popback : "<<endl;
   for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }

  cout<<"\n";

  cout<<"size is : "<<v.size()<<"\n";
  cout<<"capacity is : "<<v.capacity()<<"\n";

return 0;

}