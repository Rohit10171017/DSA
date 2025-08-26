#include<iostream>
using namespace std;
void binarystring(string t,int n)
{
    if(n==0) 
    {
        cout<<t<<endl;
        return ;
    }
    if(t.size()==0 || t[t.size()-1] != '1') binarystring(t+"1",n-1);
    binarystring(t+"0",n-1);
}
int main()
{
    int n;
    cout<<"enter length of the string : ";
    cin>>n;
    binarystring("",n);
    return 0;
}