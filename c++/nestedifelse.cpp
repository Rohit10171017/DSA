#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter the number : ";
    cin>>n;
    if(n%3==0||n%5==0)
    {
        if(n%15!=0)
        {
           cout<<"the number is divisible by 3 or 5 but not 15";
        }
        else{
            cout<<"the number is divisible by 3 or 5 but also 15";
        }
    }
    else 
    {
        cout<<"the number is not divisible by 3 or 5";
    }

}
