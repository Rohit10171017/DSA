#include<iostream>
using namespace std ;
int main()
{
    int n;//alloting memory 
    cout<<"enter the number : ";//asking user to give input
    cin>>n;//storing the input value in memory location n
    if(n<0)//applying condition to print absolute value of the input number
    {
      cout<<"the absolute value of the number is = "<<-n;

    }
    else{
        cout<<"the absolute value of the number is = "<<n;
    }
}