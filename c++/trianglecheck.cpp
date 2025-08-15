#include<iostream>
using namespace std ;
int main()
{
    int a,b,c;
    cout<<"enter the sides of the triangle : ";//.asking user to give three numbers
    cin>>a>>b>>c;
    if(((a+b)>c)&&((b+c)>a)&&((a+c)>b))//applying comdition to check 
    {
        cout<<"the input sides can be a sides of the triangle";
    }
else{
    cout<<"the input sides can not be a sides of the triangle";
}


}