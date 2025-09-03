#include<iostream>
using namespace std;
void permutation(string s,string t)
{
    if(s == "")
    {
        cout<<t<<endl;
        return ;
    }
    for(int i=0;i<s.size();i++)
    {
        permutation(s.substr(0,i)+s.substr(i+1,s.size()-1-i),t+s[i]);
    }
}
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    permutation(s,"");
}