#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int n;
    cout<<"enter no of elements of an array :";
    cin>>n;
    int arr[n];
    cout<<"enter elements of an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = INT_MIN;
    int secondmax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        
         if(arr[i]>max) 
          {  
            secondmax = max;
             max = arr[i];
          }
          else if(arr[i]>secondmax && arr[i]!=max)

          {
            secondmax=arr[i];
          }
        }
    cout<<"the second maximum value in the array is : "<<secondmax;

    return 0;
}
