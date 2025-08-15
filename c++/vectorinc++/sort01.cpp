#include<iostream>
#include<vector>
using namespace std ;
void sort(vector<int>&v)
{
    int count0=0;
    for(int i=0;i<v.size();i++)
    {
        if(v.at(i)==0) count0++;
        else continue;
    }
    for(int i=0;i<v.size();i++)
    {
        if(i<count0) v.at(i)=0;
        else  v.at(i)=1;
    }
    
}
int main()
{
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of the vector (only 0's and 1's) : ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v.at(i);
    }
    sort(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
return 0;
}