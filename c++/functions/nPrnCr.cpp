#include<iostream>
using namespace std ;
int factorial(int n)//this is the user defined function, which gives us factorial value 
{                    //we used function in this code beacause we wanted to find value of factorial again and again with different inputs
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n,r;
    cout<<"enter value of n : ";//taking value of n from user
    cin>>n;
    cout<<"enter value of r : ";//taking value of r form user
    cin>>r;
    int nPr = factorial(n)/factorial(n-r);//finding value of permutation using mathematical formula
    int nCr = factorial(n)/(factorial(r)*factorial(n-r));//finding value of combination using mathematical formula
    cout<<"permutation is = "<<nPr<<"\n";
    cout<<"combination is = "<<nCr;

}     
