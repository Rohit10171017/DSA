#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    int n;
    cout<<"enter size of the array : ";
    cin>>n;
    vector<int>v;
    cout<<"enter "<<n<<" elements of the array : ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>v2;
    for(int i=v.size()-1;i>=0;i--)
    {
         v2.push_back(v.at(i));
    }
    cout<<"output after copying is : ";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2.at(i)<<" ";
    }
return 0;
}


