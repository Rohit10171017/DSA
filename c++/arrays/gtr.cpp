#include<iostream>
using namespace std ;
int main()
{
    int arr[4] ; //gtr => good to remember
    cout<<arr<<"\n";//all these three output gives a adress  as an output . Which is adress of an array
    cout<<&arr<<endl;
    cout<<&arr[0];//adress of an array and adress of first element of an array both are same
    return 0;
}