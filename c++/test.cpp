#include<iostream>
#include<string>
using namespace std;
void permutation(string s,string t)
{
    if(s.size() == 0)
    {
        cout<<t<<endl;
        return ;
    }
    for(int j = 0;j<s.size();j++)
    {
       permutation(s.substr(0,j)+s.substr(j+1,s.size()-j-1),t+s[j]);
    }
}
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    permutation(s,"");
}