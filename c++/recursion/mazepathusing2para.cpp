#include<iostream>
using namespace std;
int mazepath(int n,int m) //finding ways of maze path by just moving right and down. only using 2 parameters
   {
    if(n==1 || m==1) return 1;
    else return mazepath(n,m-1) + mazepath(n-1,m);
   }
void printpath(int n,int m,string s)
{
    if(n<1 || m<1) return;
    if(n==1 && m==1)
    {
        cout<<s<<endl;
        return;
    }
    printpath(n-1,m,s+'D');
    printpath(n,m-1,s+'R');
}
int main()
{
   int n; 
   cout<<"enter no of rows of the maze : ";
   cin>>n;
   int m;
   cout<<"enter no of columns of the maze : ";
   cin>>m;
   if(n==0 && m==0) 
   {
    cout<<0;
    return 0;
   }
   cout<<mazepath(n,m);
   cout<<endl;
   printpath(n,m,"");
   return 0;
}