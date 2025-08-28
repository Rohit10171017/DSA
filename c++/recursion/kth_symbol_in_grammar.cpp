#include<iostream>
using namespace std;
void kthsymbol(int n,int k,int i,int s,int *p)
{
    if(n == 1)
    {
        cout<<"0";
        return ;
    }
    if(i == n)
    {
        if(*p==k) 
        {
            cout<<s<<" ";
        }
        ++*p;
        return ;
    }
    if(s==0)
    {
        kthsymbol(n,k,i+1,0,p);
        kthsymbol(n,k,i+1,1,p);
    }
    else
    {
        kthsymbol(n,k,i+1,1,p);
        kthsymbol(n,k,i+1,0,p);
    }
}
int main()
{
    int n;
    cout<<"enter a number of rows : ";
    cin>>n;
    int k;
    cout<<"enter a no of k : ";
    cin>>k;
    int x = 1;
    kthsymbol(n,k,1,0,&x);
    return 0;
}