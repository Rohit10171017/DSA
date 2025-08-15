#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of rows: ";
    cin>>n;
    int m;
    cout<<"enter no of columns : ";
    cin>>m;
    int a[n][m];
    cout<<"enter elements of an array : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           if(a[i][j]>max) 
           {
            smax = max;
            max = a[i][j];
           }
           else if(a[i][j]>smax)
           {
            smax = a[i][j];
           }
    }
}
    cout<<"the largest element is = "<<max<<endl;
    cout<<"the second largest element is = "<<smax;

}