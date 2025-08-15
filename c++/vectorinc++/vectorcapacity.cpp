#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<int>R;
    R.push_back(5);
    cout<<R.capacity()<<"\n";
    R.push_back(10);
    cout<<R.capacity()<<"\n";
    R.push_back(54);
    cout<<R.capacity()<<"\n";
    R.push_back(0);
    cout<<R.capacity()<<"\n";
    R.push_back(65);
    cout<<R.capacity();
    return 0;

}