#include<iostream>
using namespace std;
int main()
{
    
    int a[2][4];
    cout<<"enter roll no and marks of the student : ";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"\n";
     for(int i=0;i<2;i++)
    {
        if(i==0)
        cout<<"Roll No : ";
        for(int j=0;j<4;j++)
        {
            if(i==0)
                cout<<a[i][j]<<" ";
            else
               cout<<a[i][j]<<" ";
        }
        cout<<"\n";
        if(i==0)
        cout<<"Marks : ";
    }
    
}