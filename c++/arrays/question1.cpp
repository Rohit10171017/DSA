#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of students in the class : ";
    cin>>n;
    int Marks[n];
    cout<<"enter marks of the students : ";
    for(int i=0;i<n;i++)
    {
        cin>>Marks[i];
    }
    cout<<"roll no of the students who got less than 35 marks are : ";
    for(int i=0;i<n;i++)
    {
        if(Marks[i]<35)
        cout<<i<<" ";
    }
    return 0;
}