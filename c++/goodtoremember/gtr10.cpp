#include<iostream>
#include<vector>
using namespace std;
int  main()
{
    vector<int>v;
    v = {1,2,3,4,5,6,7,8,9};
    v.insert(v.begin()+2,90); 
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;
    v.erase(v.begin()+2);
     for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    return 0 ;
}