#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of rows : ";
    cin>>n;
    int size = 2*n-1;
    int a=0;
    for(int i=1;i<=n;i++)
    {
        int b=0;
        for(int j=1;j<=size;j++)
        {
            if(j>n) b+=2;
            if((i!=1)&&((j>=n-a)&&(j<=n+a)))
            cout<<" ";
            else cout<<j-b;
            
        }
        if(i>1)a++;
        
        cout<<"\n";
    }
}
