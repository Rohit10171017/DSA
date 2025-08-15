#include<iostream>
#include<vector>
using namespace std ;
int rainwater(vector<int>&v)
{
    int x = v.size();
vector<int>v1(x);
    // vector<int>v2(x);
    int max = v[0];
    v1[0]=-1;
    for(int i=1;i<v.size();i++)
    {
        v1[i]=max;
        if(v[i]>max)
        max = v[i];
    }
    v1[v.size()-1] =-1; 
    max = v[x-1];
    int sum = 0;
    for(int i=x-2;i>=0;i--)
    {
        int s = min(v1[i],max);
        if(s>v[i]) sum = sum + (s-v[i]);
        v1[i] = max;
        if(v[i]>max)  
        max = v[i];
         
    }
   
//     for(int i=0;i<x;i++)
//     {
//       int s = min(v1[i],v2[i]);
//       if(v[i]>s) continue;
//       else sum+=(s-v[i]);
//   
// }
return sum;
}
int main()
{
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    vector<int>v(n);
    
    cout<<"enter elements of an array : ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    int sum = rainwater(v);
    cout<<"the volume of rainwater stored is : "<<sum<<" meter cube";
}