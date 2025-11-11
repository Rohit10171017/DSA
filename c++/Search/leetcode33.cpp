#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&v,int i,int j,int target)
{
    int l = i;
    int h = j;
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(v[mid] == target)
        {
            return mid;
        }
        else if(v[mid]>target)
        {
            h = mid-1;
        }
        else 
        {
            l = mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter a size of an array : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of an array : ";
    for(auto &ele : v)
    {
        cin>>ele;
    }
    int x;
    cout<<"enter a target element : ";
    cin>>x;
    int l = 0;
    int h = n-1;
    // while(l<=h)
    // {
    //     int mid = (l+h)/2;
    //     if(v[mid] == x) 
    //     {
    //         cout<<mid;
    //         break;
    //     }
    //     else if(v[mid]>v[n-1])
    //     {
    //         if(x < v[mid]) h = mid - 1;
    //         else l = mid + 1;
    //     }
    //     else if(v[mid] < v[n-1])
    //     {
    //         if(x < v[mid]) h = mid - 1;
    //         else l = mid + 1;
    //     }
    // }
    int piv = 0;
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(v[mid] < v[mid+1] && v[mid] < v[mid+1])
        {
            piv = mid;
            break;
        }
        else if(v[mid]>v[mid+1] && v[mid] > v[mid-1])
        {
            piv = mid+1;
            break;
        }
        else if(v[mid] > v[n-1])
        {
            l = mid+1;
        }
        else if(v[mid] < v[n-1])
        {
            h = mid-1;
        }
    }
    if(x>=v[piv] && x <= v[n-1]) cout<<binarysearch(v,piv,v.size()-1,x);
    else if(x>=v[0] && x <= v[piv-1]) cout<<binarysearch(v,0,piv-1,x);
    return 0;
}  