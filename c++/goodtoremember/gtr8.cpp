#include<iostream>
using namespace std;
int main()
{
    int a[] = {4,2,9,0,33,56};
    int *ptr = a; // we can also write as int *ptr = &a[0]. but not int *ptr = arr or int *ptr = arr[0]
    int n = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        // cout<<ptr[i]<<" ";
        cout<<*ptr<<" ";
        ptr++;        // here we lost the original adress of the array 
    }
    cout<<endl;
    ptr = a;
    *ptr = 6;
    ptr++;
    *ptr = 10;
    ptr--;    // did ptr-- because to go back to original adress of the array.
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }
    return 0;
}