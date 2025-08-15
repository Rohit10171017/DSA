#include<iostream>
#include<string>
using namespace std ;
void removechar(char c,string ans,string original,int i )
{
   
    if(i == original.length()) 
    {
        cout<<ans;
        return;
    }
    char ch = original[i];
    if(ch == c) removechar(c,ans,original,i+1);
    else removechar(c,ans+ch,original,i+1);
}
int main()
{
    string s;
    cout<<"enter the string : ";
    getline(cin,s);
    char ch;
    cout<<"enter the character you want to remove fronm the string : ";
    cin>>ch;
    removechar(ch,"",s,0);
    return 0;
}