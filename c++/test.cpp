#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    cout<<v.size()<<" "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.size()<<" "<<v.capacity();
    return 0;
}
