#include<iostream>
using namespace std;
void add (int *a,int *b,int n)
{
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            *a = *a+*b;
            a++;
            b++;
        }
    }
}
void inputoutput(int n,int *a,int x)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(x==0)
            {
            cin>>*a;
            a++;
            }
            else
            {
            cout<<*a<<" ";
            a++;
            }
        }
        if(x!=0)
        cout<<endl;
    }
}
  int main()
  {
    int n;
    cout<<"enter value of n: ";

    cin>>n;
    int a[n][n];
    cout<<"enter elements of the matrix a : "<<endl;
    inputoutput(n,&a[0][0],0);
    int b[n][n];
    cout<<"enter elements of the matrix b : "<<endl;
    inputoutput(n,&b[0][0],0);
    add(&a[0][0],&b[0][0],n);
    cout<<"new matrix after addition of two matrix is : "<<endl;
    inputoutput(n,a[0],1);

}  