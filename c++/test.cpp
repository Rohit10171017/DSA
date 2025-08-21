#include <iostream>
using namespace std;
void maze(int n,int m ,string t)
{
    if(n<1 || m<1) return ;
    if(n==1 && m==1)
    {
        cout<<t<<endl;
        return ;
    }
    maze(n-1,m,t+"D") ;
    maze(n,m-1,t+"R");
}
int main()
{
    int n;
    cout << "enter no of rows : ";
    cin >> n;
    int m;
    cout<<"enter no of columns : ";
    cin>>m;
    maze(n,m,"");
    return 0;
}