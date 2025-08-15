#include<iostream> // printing 1 to n with using xtra parameter
using namespace std;
void print(int n,int x)
{
    cout<<x<<endl;
    if(x==n) return;
    print(n,x+1);
}
int main()
{
    int n;
    cout<<"enter a value of n : ";
    cin>>n;
    print(n,1);
    return 0;
}