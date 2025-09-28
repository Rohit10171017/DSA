#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter a number to get its square root : ";
    cin>>x;
    if(x == 0 || x== 1)
    {
        cout<<x;
        return 0;
    }
    int low = 2;
    int high = x/2;
    bool flag = false;
    while(low<=high)
    {
        long long mid = low + (high - low)/2;
        long long ans = mid * mid ;
        if(ans == x)
        {
            flag = true ;
            cout<<mid;
            break;
        }
        else if(ans >x)
        high = mid - 1;
        else 
        low = mid + 1;
    }
    if(flag == false ) cout<<high;
    return 0;
}