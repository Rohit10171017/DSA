#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter a number to get its suare root : ";
    cin>>x;
    if(x == 0 || x== 1)
    {
        cout<<x;
        return 0;
    }
    int low = 2;
    int high = x/2;
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        if(mid * mid == x)
        {
            cout<<mid;
            break;
        }
        else if(mid * mid >x)
        high = mid - 1;
        else 
        low = mid + 1;
    }
    return 0;
    
}