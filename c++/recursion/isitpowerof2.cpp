#include<iostream>
using namespace std;
bool check(int n)
{
    if (n < 1) return false;
    if (n == 1) return true;
    if (n % 2 != 0) return false;
    return check(n / 2);
}
int main()
{
    int n;
    cout<<"enter a no : ";
    cin>>n;
    bool flag = check(n);
    
    // this below method is without using recursion
    // float a = n;
    // bool flag ;
    // while(a>0)
    // {
    //  if(a==1) 
    //   {
    //     flag = true;
    //     break ;
    //   }
    //   float b = (a/=2);
    //   int c = b;
    //   if(c!=b)
    //   {
    //     flag = false ;
    //     break;
    //   }
     
    // }
    flag==true ? cout<<"power of 2 ": cout<<"not power of 2";
}