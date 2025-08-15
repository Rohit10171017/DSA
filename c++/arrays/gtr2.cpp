#include<iostream>
using namespace std ;
int main()
{
   int arr[]={1,2,3,4,5,6,7,8,9,0};
   int *ptr = &arr[0]; //also we can write as int *ptr = arr; but we can't write as int *ptr = &arr;
   ptr[9] = 10; //we can access array by name of the pointers also.
   for(int i=0;i<10;i++)//here we printing array elements using pointer name. Thats crazy right 
   {
    cout<<ptr[i]<<" "; 
   }
}
// Note : while printing array we can use following methods 
//     1 - a[i]
//     2 - i[a]
//     if we use pointer like int *ptr = arr;
//     3 - i[ptr]
//     4 - ptr[i]
//     5 - through *ptr