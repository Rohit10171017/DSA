#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of rows of the 2D vector : ";
    cin>>n;
    vector< vector<int> >v(n);
    for(int i=0;i<n;i++)
    {
        long long first = 1;
        for(int j=0;j<=i;j++)
        {
           v[i].push_back(first);
           first = first * (i-j)/(j+1);
        }
    }
    cout<<"the pascals triangle is  : \n";
    for(int i=0;i<n;i++)
    {
        for(int k=i;k<n-1;k++)
        {
            cout<<" ";
        }
        int m = v[i].size();
        for(int j=0;j<m;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
}