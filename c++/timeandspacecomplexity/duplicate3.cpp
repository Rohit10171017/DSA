#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of the vector : ";
    cin>>n;
    vector<int>v(n);
    cout<<"enter elements of the vector according to the given condition : ";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum1 = (n-1) * n / 2; // n-1 because one number is duplicate. (finding sum by excluding dupicate element)
    // finding sum including duplicate element 
    int sum2 = 0;
    for(int i=0;i<n;i++)
    {
        sum2 += v[i];
    }
    cout<<"the dupicate element in the vector is : "<<sum2-sum1;
    return 0 ;
}