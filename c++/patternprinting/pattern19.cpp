#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter a no of rows : ";
    cin>>n;
    int a=n;
    int size=2*n-1;
    for(int i=1;i<=size;i++)
    {
        int b=n;
        for(int j=1;j<=size;j++)
        {     
            if(a>=b)
            cout<<a;
            else
            cout<<b;
            if(j<n) b--;
            else b++;
        }
        if(i<n) a--;
        else a++;
    
        cout<<endl;
    }
}