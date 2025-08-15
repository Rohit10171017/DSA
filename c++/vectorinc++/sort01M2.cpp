#include<iostream>
#include<vector>
using namespace std ;
void sort01(vector<int>&v)
{
    int i=0,j=v.size()-1 ;
    while(i<=j)
    { 
        if(v[i]=1&&v[j]==0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp; 
            i++;
            j--;  
        }
        else if(v[i]==0)
            i++;
        else if(v[j]==1)
        j--;
    }
    
}
int main()
{
    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of an array  (only 0's and 1's ) : ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    sort01(v);
    cout<<"array after sorting is : ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }


}