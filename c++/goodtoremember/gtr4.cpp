#include<iostream>
using namespace std ;
void fun(int x =7,float y = 7.34)//these initialized values are known as  default values 
{
    cout<<x<<" "<<y;
}
int main()
{
   fun(5.6);  // if we send (5,7.24) in out put we get - 5,7.24
}             // if we did not send any actaul parameters it will display default values in the output