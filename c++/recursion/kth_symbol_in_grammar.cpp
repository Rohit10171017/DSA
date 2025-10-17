#include<iostream>
using namespace std;
// void kthsymbol(int n,int k,int i,int s,int *p)
// {
//     if(n == 1)
//     {
//         cout<<"0";
//         return ;
//     }
//     if(i == n)
//     {
//         if(*p==k) 
//         {
//             cout<<s<<" ";
//         }
//         ++*p;
//         return ;
//     }
//     if(s==0)
//     {
//         kthsymbol(n,k,i+1,0,p);
//         kthsymbol(n,k,i+1,1,p);
//     }
//     else
//     {
//         kthsymbol(n,k,i+1,1,p);
//         kthsymbol(n,k,i+1,0,p);
//     }
// }
int kthsymbol(int n,int k)
{
     if(n == 1) return 0;
    if(k%2==0) return 1-kthsymbol(n-1,k/2);
    else return kthsymbol(n-1,k/2+1);
}
int main()
{
    int n;
    cout<<"enter a number of rows : ";
    cin>>n;
    int k;
    cout<<"enter a no of k : ";
    cin>>k;
    // int x = 1;
    // kthsymbol(n,k,1,0,&x);
    cout<<kthsymbol(n,k);
    return 0;
}