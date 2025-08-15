#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string>v;
    while(ss>>temp)
    {
       v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int maxcount=0;
    int count;
    bool flag;
    int idx;
    for(int i=0;i<v.size();i++)
    {
        if(flag==false)
        count = 1;
        if(v[i]==v[i-1])
        {
            count++;
            flag = true;
        }
        else{
            flag = false;
        }
        if(count>maxcount)
        {
        maxcount=count; 
        }
    }
    count = 1;
   for(int i=0;i<v.size();i++)
   {
        if(v[i]==v[i-1])
        {
            count++;
        }
        else{
            count = 1;
        }
        if(count==maxcount)
        cout<<v[i]<<" "<<count<<endl;
   }
}