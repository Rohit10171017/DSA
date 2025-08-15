#include<iostream>
#include<vector>
#include<climits>
using namespace std ;
int main()
{
    int idx=INT_MIN,n,x;
    cout<<"enter no of elements in the vector : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter "<<n<<" elements of the array : ";
    for(int i=0;i<v.size();i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    cout<<"enter element to find its last occurense in the array : ";
    cin>>x;
    for(int i=v.size()-1;i>=0;i--)
    {
        if(v.at(i)==x)
        {
        idx=i;
        break;
        }
    }
       if(idx>=0)
        cout<<"the last occurence of "<<x<<" is found at index "<<idx;
        else
        cout<<"not found";
        return 0;
}