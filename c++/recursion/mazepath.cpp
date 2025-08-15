#include<iostream>
using namespace std;
int mazepath(int i,int j,int n,int m)
{
   if(i==n || j==m) return 1;
   else return mazepath(i+1,j,n,m) + mazepath(i,j+1,n,m);
}
int main()
{
    int n ;
    cout<<"enter no of rows of the maze : ";
    cin>>n;
    int m ;
    cout<<"enter no of columns of the maze : ";
    cin>>m;
    cout<<mazepath(1,1,n,m);
    return 0;
}