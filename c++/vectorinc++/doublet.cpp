#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of elements in the vector : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter "<<n<<" elements of the vector :  ";
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i]; 
    }
    int x;
    cout<<"enter element to find its doublet : ";
    cin>>x;
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[i]+v[j]==x)
            {
            cout<<"doublet idices are "<<"("<<i<<","<<j<<")"<<"\n";
            } 
        }
    } 
    return 0;
}