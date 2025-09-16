#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"enter a size of an array : ";
    cin>>n;
    vector<int>arr(n);
    for(int &ele : arr)
    {
        cin>>ele;
    }
    int target ;
    cout<<"enter a target : ";
    cin>>target;
    int i=0,j=n-1;
    sort(arr.begin(),arr.end());
    while(i<j)
    {
        if(arr[i]>= target) break;
        else if(arr[j]>=target) j--;
        else if(arr[i] > (target-arr[j])) j--;
        else if(arr[i] < (target-arr[j])) i++;
        else if(arr[i] + arr[j] == target) 
        {
            cout<<"("<<arr[i++]<<" "<<arr[j--]<<")"<<endl;
        }
    }    
}