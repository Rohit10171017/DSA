#include<iostream>
#include<vector>
using namespace std;
void row_column_zero(int *x,int *y,vector<vector<int>>&v)
{
    for(int j=0;j<v[0].size();j++)
    {
        v[*x][j] = 0;
    }
    for(int i=0;i<v.size();i++)
    {
        v[i][*y] = 0;
    }
}
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    int m;
    cout<<"enter no of columns : ";
    cin>>m;
    vector<vector<int>>v(n,vector<int>(m));
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    int r  = -1,c = -1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]==0 && i != r && j != c) 
            {
                r = i; c = j;
                row_column_zero(&r,&c,v);
            }
        }
    }
    cout<<"matrix after operation is : \n";
    for(auto &arr : v)
    {
        for(auto ele : arr)
        {
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    

}