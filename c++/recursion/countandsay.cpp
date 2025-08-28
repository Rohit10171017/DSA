#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string countandsay(int n)
{
    if(n==1) return "1"; 
    string s = countandsay(n-1);
    if(s.size() == 1 ) return "1" + s;
    string ans = "";
    int count = 1;
    for(int i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            ans = ans + to_string(count)+s[i-1];
            count = 1;
        }
    }
    ans += to_string(count)+s.back();
    return ans;
}

int main()
{
    int n;
    cout<<"enter a value of n : ";
    cin>>n;
    // countandsay(1,n);
    string s = "1";
    // for(int i = 2; i <= n; i++)
    // {
    //     string temp = "";
    //     int count = 1;
    //     for(int j = 1; j < s.size(); j++)
    //     {
    //         if(s[j] == s[j-1])
    //             count++;
    //         else
    //         {
    //             temp += to_string(count) + s[j-1];
    //             count = 1;
    //         }
    //     }
    //     temp += to_string(count) + s.back();
    //     s = temp;
    // }
    cout <<countandsay(n) << endl;
 
}