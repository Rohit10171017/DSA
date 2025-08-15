#include<iostream>
using namespace std ;
int main()
{
    int *ptr1 = NULL; //for all three NULL,0,'\0' we get same adress so we can use any of these as nullpointer.
    int *ptr2 = 0;
    int *ptr3 = '\0';//\0 is a null character
    cout<<ptr1<<"\n";
    cout<<ptr2<<endl;
    cout<<ptr3<<endl;
}