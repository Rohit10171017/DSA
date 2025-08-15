#include<iostream>
using namespace std ;
int x = 7;//global variable
void fun()
{
    cout<<x;
}
int main()
{
    int x = 10;//local variable
    cout<<x<<"\n";;
    fun();
}
// note :
//    - priority of the local variable is more than glabal variable .