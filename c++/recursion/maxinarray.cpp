#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// void maxinarray(vector<int>&v,int i ,int max)
// {
//     if(i==v.size()) 
//     {
//         cout<<max;
//         return;
//     }
//     if(v[i]>max) max = v[i];
//     maxinarray(v,i+1,max);
// }
int maxinarray(vector<int>&v,int i)
{
    if(i==v.size()) return INT_MIN;
    return max(v[i],maxinarray(v,i+1));
}

int main()
{
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<maxinarray(v,0);
    return 0;
}