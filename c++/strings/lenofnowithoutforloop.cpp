#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    cout<<"enter a number : ";
    cin>>x;
    string s = to_string(x); //converted integer number to string
    int n = s.length(); //finding length of the string which is equal to total no of digits of the number
    cout<<"the no of digits in the input number are "<<n;
}