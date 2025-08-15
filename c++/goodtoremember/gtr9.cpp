#include<iostream>  // some more inbuilt functions of strings
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter a string : ";
    getline(cin,s);
    cout<<s.insert(3,"GOAT"); //s.insert(idx,string);
    cout<<endl;
    cout<<s.replace(2,4,"rohit"); //s.replace(idx,length,string)
    cout<<endl;
    cout<<s.find("le"); //in output we get index of 'l'
    cout<<endl;
    cout<<s.erase(2,6);//s.erase(idx,length)
    cout<<endl;
 
    return 0;
}