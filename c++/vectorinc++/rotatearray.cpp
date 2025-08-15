#include<iostream>
#include<vector>
using namespace std ;
void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }
}
void reverse(int a,int b,vector<int>&v)
{
    for(int i=a,j=b;i<=j;i++,j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
}
int main()
{
    int n;
    cout<<"enter size of the array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter "<<v.size()<<" elements of an array : ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    cout<<"displaying array before rotating : ";
    display(v);
    cout<<"\n";
    int k;
    cout<<"enter how many times to ratate array : ";
    cin>>k;
    if(k>n) k%=n;
    reverse(0,v.size()-1,v);
    reverse(0,k-1,v);
    reverse(k,v.size()-1,v);
    cout<<"displaying array after rotating by "<<k<<" steps : ";
    display(v);
    return 0;

}