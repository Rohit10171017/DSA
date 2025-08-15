#include<iostream>
#include<vector>     // thid method is less time consuming than first method but it consumes more space 
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of an vector : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter the elements of an vector according to condition : ";
    for(int i=0;i<n;i++)
    {
        cin>>v.at(i);
    }
    vector<int>check(n);
    for(int i=0;i<n;i++)
    {
        int x = v[i];
        if(check[x]==0)
        check[x]++;
        else{
            cout<<"the duplicate element is "<<x;
            break;
        }
    }
    // int max = 0;
    // int idx = -1;
    // for(int i=0;i<n;i++)
    // {
    //     if(check[i]>max)
    //     {
    //         max =check[i];
    //         idx = i;
    //     }
    // }
    // if(idx != -1)
    // cout<<"the duplicate element in an array is : "<<idx<<" occuring "<<max<<" times";
    return 0;
}