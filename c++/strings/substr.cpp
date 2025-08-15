#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s.substr(2)<<"\n"; //it will print all characters from index 2 to end. s.substr(idx)
    cout<<s.substr(2,1);//it will print all characters from index 2 of size 5, s.substr(idx,len)
}