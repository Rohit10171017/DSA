#include<iostream>
using namespace std;
void path(int n,char s,char h,char d)
{
    if(n==0) return;
    path(n-1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    path(n-1,h,s,d);
}
int main()
{
    int n; 
    cout<<"enter no of rings : ";
    cin>>n;
    path(n,'A','B','C');
}