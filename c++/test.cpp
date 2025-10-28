#include<iostream>
#include<string>
using namespace std;
string countandsay(int n,string t,int j)
{
    if(n==1) return "1";
    if(j == n ) return t;
    int i = 0;
    string s="";
    int c = 1;
    while(t[i] != '\0')
    {
        if(t[i]==t[i+1] && i != t.size()-1) c++;
        else{
            s = s + to_string(c) + t[i];
            c = 1;
        }
        i++;
    }
    return countandsay(n,s,j+1);
}
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<countandsay(n,"1",1);
}