#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "messi the goat";
    cout<<s.size()<<endl;
    cout<<s.length()<<endl;
    string t = " of football ";
    s = s + t;
    cout<<s<<endl;
    s = t + s;        // we can also write as s = "xyz" + s or s = s + "xyz"; 
    cout<<s<<endl;
    reverse(s.begin(),s.end()); //we can reverse part of string also like we did in vectors - reverse(s.begin()+1,s.begin()+j+1)
    cout<<s<<endl;               // above comment tells us about how to reverse part of string from index i - j

}