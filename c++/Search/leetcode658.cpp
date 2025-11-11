#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter a size of an array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of an vetcor in a sorted order : ";
    for(auto &ele : v) cin>>ele;
    int k,x;
    cout<<"enter a value of k and x";
    cin>>k>>x;
    
    
}