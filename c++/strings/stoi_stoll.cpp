#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "1234567";
    int x = stoi(s);
    x+=1;
    cout<<x<<"\n";
    string t = "1234567890123";;
    long long y = stoll(t);
    cout<<y;
}