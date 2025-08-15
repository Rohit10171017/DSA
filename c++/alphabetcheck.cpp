#include<iostream>
using namespace std ;
int main()
{
 char x;
 cout<<"enter the character : ";
 cin>>x;
 int y=(int)x;
 if((y>=65&&y<=90)||(y>=97&&y<=122))
 {
    cout<<"the input characer is an alphabet ";
 }
 else{
    cout<<"the input character is not an alphabet ";
 }
}