#include<iostream>
using namespace std ;
void mergesort(int a[], int n, int b[], int m)
{
    int i = n - m - 1; // Last element of the original elements in a[]
    int j = m - 1;     // Last element of b[]
    int k = n - 1;     // Last position in a[]

    while (i >= 0 && j >= 0)
    {
        if (a[i] > b[j])
        {
            a[k] = a[i];
            i--;
        }
        else
        {
            a[k] = b[j];
            j--;
        }
        k--;
    }
    // Copy remaining elements from b[], if any
    while (j >= 0)
    {
        a[k] = b[j];
        j--;
        k--;
    }
}
void input(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
int main()
{
 int n,m;
 cout<<"enter size of array 1 : ";
 cin>>n;
 cout<<"enter size of array 2 : ";
 cin>>m;
 int a[n+m],b[m];
 cout<<"enter elements of the array 1 in sorted order"<<" and at the end add "<<m<<" no of 0's : ";
 input(a,n+m);
 cout<<"enter elements of the array 2 in the sorted order :";
 input(b,m);
 mergesort(a,n+m,b,m);
 cout<<"array after merge sorting is : ";
 for(int i=0;i<n+m;i++)
 {
  cout<<a[i]<<" ";
 } 
 


}