#include<iostream>
#include<vector>
using namespace std;
// void paranthesis(vector<string>&v,string t,int n,int s,int m)
// {
//     if(s <0 || s>m) return ;
//     if(n==0)
//     {
//         if(s==0)
//         v.push_back(t);
//         return ;
//     }
//     paranthesis(v,t+"(",n-1,s+40,m);
//     paranthesis(v,t+")",n-1,s-40,m);

// }
void generate(vector<string>&v,string &s,int open,int close,int n)
{
    if(close == n)
    {
        v.push_back(s);
        return ;
    }
    if(open<n) 
    {
        s.push_back('(');
        generate(v,s,open+1,close,n);
        s.pop_back();
    }
    if(close<open) 
    {
        s.push_back(')');
        generate(v,s,open,close+1,n);
        s.pop_back();
    }
}
int main()
{
    int n;
    cout<<"enter a number of paranthesis : "; // 1 -> () this is one paranrthesis
    cin>>n;
    vector<string>v;
    // paranthesis(v,"",2*n,0,40*n);
    string s;
    generate(v,s,0,0,n);
    for(string str : v)
    {
        cout<<str<<endl;
    }
    cout<<v.size();
    return 0;
}