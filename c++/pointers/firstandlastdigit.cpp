#include<iostream>
using namespace std ;
void firstandlastdigit(int n,int *fd,int *ld)
{
    *ld = n%10;
    while(n>9)
    {
        n/=10;
    }
     *fd = n ; 
}
int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int fd,ld;
    firstandlastdigit(n,&fd,&ld);
    cout<<"first digit of the number is : "<<fd<<"\n";
    cout<<"last digit of the number is : "<<ld;
    return 0;

}