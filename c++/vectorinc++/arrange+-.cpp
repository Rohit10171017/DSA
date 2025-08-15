#include<iostream>
#include<vector>
using namespace std ;
void arrange(vector<int>&v)
{
    int i=0,j=v.size()-1;
    while(i<=j)
    {
        if(v.at(i)<0 && v.at(j)>=0)
        {
            int temp = v.at(i);
            v.at(i) = v.at(j);
            v.at(j) = temp;
            i++;
            j--;
        }
        else if(v.at(i)>=0) i++;
        else if(v.at(j)<0)  j--;
    }
}
void display(vector<int>&v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
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
        cin>>v.at(i);
    }
    cout<<"array before arrangement : ";
    display(v);
    arrange(v);
    cout<<"array after arrangement is : ";
    display(v);
    return 0;
}