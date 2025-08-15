#include<iostream>
#include<vector>
using namespace std;
// analyze this code and also commented code to know how 1D vectors and 2D vectors in different condition
int main()
{
    int n;
    cout<<"enter no of rows of the pascals triangle you wants to print : ";
    cin>>n;
    vector<vector<int>>v(n);
    // for(int i=1;i<=n;i++)
    // {
    //     vector<int>a(i);
    //     v.push_back(a);
    // }
    for(int i=0;i<n;i++)
    {
        long long first = 1;
        // vector<int>a;
        for(int j=0;j<=i;j++)
        {
            // v[i][j] = first; 
            // a.push_back(first);
            v[i].push_back(first);
            first = first * (i-j)/(j+1);
        }
        // v.push_back(a);
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}