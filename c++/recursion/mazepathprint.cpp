#include<iostream>
using namespace std;
void printmazepath(int i,int j,int n,int m,string t)
{
   if(i>n || j>m) return;
   if(i==n && j==m) 
   {
    cout<<t<<endl;
    return;
   }
    printmazepath(i+1,j,n,m,t+'D');
    printmazepath(i,j+1,n,m,t+'R');
}
int main()
{
    int n ;
    cout<<"enter no of rows of the maze : ";
    cin>>n;
    int m ;
    cout<<"enter no of columns of the maze : ";
    cin>>m;
    printmazepath(1,1,n,m,"");
    return 0;
}