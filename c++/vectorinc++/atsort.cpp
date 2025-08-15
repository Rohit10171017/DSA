#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
int main()
{
    vector<int>v;
    v.push_back(34);
    v.push_back(87);
    v.push_back(2);
    v.push_back(6);
    cout<<v.at(1)<<endl;   //here 1 is index
    v.at(1) = 97;
    cout<<v.at(1);
    cout<<endl;
    //sort
    sort(v.begin(),v.end());
    //in output we get 2 6 34 97 . which is sorted output
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
}
