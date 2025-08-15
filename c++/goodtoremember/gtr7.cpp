#include<iostream>
using namespace std;
int main()
{
  int a[][3] = {{1,2,3},{4,5,6}};
  int *ptr = (int*)a;
  int *p = (int*)(a+1);// if i write just a+1 instead of (a+1) the ptr will move to nest adress of the same row
  cout<<*(ptr+3)-*(p);// if i write as (a+1) the pointe will point towards first element of the next row
  return 0;
}