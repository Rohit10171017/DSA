#include<iostream>
using namespace std;
int main()
{
    char arr[]={'R','O','H','I','T'};
    int size = sizeof(arr)/sizeof(arr[0]);
    //cout<<size;
    char *ptr = arr;
   // cout<<ptr;
    cout<<"\n";
   // cout<<&arr;
    int i = 0;
    while(i<size)
    {
        cout<<*ptr;
        ptr++;
        i++;
    }
}