#include<iostream> // printing 1 to n without using xtra parameter
using namespace std ;
void print(int n)
{
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cout<<"enter a vlaue of n : ";
    cin>>n;
    cout<<"\n";
    print(n);
    return 0;
}