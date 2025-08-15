#include<iostream>
#include<vector>
using namespace std ;
int matrixsum(vector<vector<int>>&v)
{
    int n = v.size();
    int m = v[0].size();
    //flipping a 1 row
    for(int i=0;i<n;i++)
    {
        if(v[i][0]==0)
        {
            for(int j=0;j<m;j++)
            {
                v[i][j] = 1 - v[i][j];
            }
        }
    }
    //flipping columns only if no of 0's are more than mo of 1's
    for(int j=1;j<m;j++)
    {
        int countone = 0;
         for(int i=0;i<n;i++)
         {
            if(v[i][j] == 1) countone++;
         }
         
         if(countone<n-countone)
         {
            for(int i=0;i<n;i++)
            {
                v[i][j] = 1-v[i][j];
            }
         }
    }
    //finding sum of the each rows binary numbers corresponding decimal number
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        int x = 1;
        for(int j=m-1;j>=0;j--)
        {
           if(v[i][j]==1) sum = sum + x;
           x = x*2;
        }
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter no of rows of the matrix : ";
    cin>>n;
    int m;
    cout<<"enter no of columns of the matrix : ";
    cin>>m;
    vector< vector<int> >v(n,vector<int>(m));
    cout<<"enter elements of the matrix (only 0's and 1's) : ";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    int maxsum = matrixsum(v);
    cout<<"the required maaximum sum is : "<<maxsum;
    return 0;
}
