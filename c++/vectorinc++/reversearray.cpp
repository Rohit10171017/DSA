#include<iostream>
#include<vector>
using namespace std ;
void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<"\n";
}
int main()
{
    int n;
    cout<<"enter size od an array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter "<<v.size()<<" array elements ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    cout<<"\n";
    cout<<"array before reversing is ";
    display(v);
    //reversing algorithm  //we can use built in functions to reverse array which is - reverse(v.begin(),v.end())
    for(int i=0,j=v.size()-1;i<=j;i++,j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp; 
    }
    cout<<"array after reversing is : ";
    display(v);
  return 0;
}