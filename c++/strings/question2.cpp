#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    int n = s.size();
    cout<<s.substr(n/2);
    return 0;
}