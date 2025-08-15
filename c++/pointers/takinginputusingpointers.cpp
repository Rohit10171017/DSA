#include<iostream>
using namespace std ;
int main()
{
     int w,v;
    int *p1 = &w,*p2 = &v;;
    cout<<"enter value of w : ";
    cin>>*p1;
    cout<<"enter value of v : ";
    cin>>*p2;
    cout<<"w = "<<w<<endl;
    cout<<"v = "<<v;
    return 0;

}