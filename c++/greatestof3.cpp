#include<iostream>
using namespace std ;
int main()
{
    int a,b,c;
    cout<<"enter the value of a ,b,c : ";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<"the greatest number out of three = "<<a;
    }
    else if(b>a&&b>c)
    {
        cout<<"the greatest number out of three = "<<b;
    }
    else if(c>a&&b<c)
    {
        cout<<"the greatest number out of three = "<<c;
    }
    else
    {
     cout<<"all numbers are equal ";
    }


}