#include<iostream>
using namespace std;
bool palindrome(string s,int i,int j)
{
    if(i>=j) return true;
    if(s[i] != s[j]) return false;
    else return palindrome(s,i+1,j-1);
    // if(i>j)
    // {
    //     if(flag == true)
    //     {
    //         cout<<"palindrome";
    //     }
    //     return ;
    // }
    // if(i<=j && s[i]==s[j])
    // {
    //     palindrome(s,i+1,j-1,true);
    // }
    // else
    // {
    //     cout<<"not palindrome";
    //     return ;
    // }
}
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    cout<<palindrome(s,0,s.size()-1);
}