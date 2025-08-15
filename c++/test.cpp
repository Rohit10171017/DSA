#include <iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            smax = max;
            max = arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max)
        {
            smax = arr[i];
        }
    }
    if(smax != INT_MIN)
    {
        cout<<max<<" "<<smax;
    }
    else 
    {
       cout<<max<<endl<<"second maximum cannot be found";
    }
	return 0;
}