#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"enter a value of n : ";
    cin>>n;
    // countandsay(1,n);
    string s = "1";
    for(int i = 2; i <= n; i++)
    {
        string temp = "";
        int count = 1;
        for(int j = 1; j < s.size(); j++)
        {
            if(s[j] == s[j-1])
                count++;
            else
            {
                temp += to_string(count) + s[j-1];
                count = 1;
            }
        }
        temp += to_string(count) + s.back();
        s = temp;
    }
    cout << s << endl;
 
}