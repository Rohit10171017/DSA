
#include<iostream>
#include<vector>   // method 1 of this is code is counting no of 0,1,and 2 and adding to array
using namespace std ;
void swap(vector<int>&v,int i,int j)
{
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
void sort012(vector<int>&v)
{
int low=0,mid=0,high=v.size()-1;
while(mid<=high)
{
      if(v[mid]==2  )
    {
       swap(v,high,mid);
       high--;
    }
    else if(v[mid]==0)
    {   
        swap(v,low,mid);
        low++;
        mid++;
    }
    else  if(v[mid]==1) mid++;
    
}
}

void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
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
    cout<<"array before sorting : ";
    display(v);
    sort012(v);
    cout<<"array after sorting is : ";
    display(v);
}