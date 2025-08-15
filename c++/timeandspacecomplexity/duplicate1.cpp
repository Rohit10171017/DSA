#include<iostream> // this method is called as brute force method which has higher time complexity
#include<vector>
using namespace std;
int main()
{
   vector<int>v = {1,2,3,4,5,4,6,7,8,9,10};
   int n = v.size();
   bool flag = false;
   for(int i=0;i<n-1;i++)
   {
    for(int j= i+1;j<n;j++)
    {
        if(v[i]==v[j])
        {
            cout<<"the duplicate element is : "<<v[i]<<" at index "<<j;
            flag = true;
            break;
        }
    }
    if(flag == true) break;
   }
}