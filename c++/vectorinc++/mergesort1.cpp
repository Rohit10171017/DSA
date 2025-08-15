#include<iostream>
#include<vector>
using namespace std ;
void mergesort(vector<int>&r,vector<int>&v,vector<int>&w)
{
    int i=0,j=0,k=0;
    int  x = v.size()-1,y = w.size()-1;
    while(k<=r.size()-1)
    {
       if((v[i]<=w[j]  && i<=x && j<=y)||(i<=x && j>y))
       {
        r[k] = v[i];
        i++;
        k++; 
       }  
       else if((w[j]<=v[i] && i<=x && j<=y)||(i>x && j<=y))
       {
        r[k] = w[j];
        j++;
        k++;
       }
       
    }
}
void inputoutput(vector<int>&u,int j)
{
  for(int i=0;i<u.size();i++)
  {
    if(j==1)
    cin>>u.at(i);
    else
    cout<<u.at(i)<<" ";

  }
}
using namespace std ;
int main()
{
int n,m;
cout<<"enter size of array 1 : ";
cin>>n;
cout<<"enter size of array 2 : ";
cin>>m;
vector<int>v(n);
vector<int>w(m);
cout<<"enter elements of array 1 in sorted condition : ";
inputoutput(v,1);
cout<<"enter elements of array 2 in sorted condition : ";
inputoutput(w,1);
int size = v.size()+w.size();
vector<int>r(size);
mergesort(r,v,w);
cout<<"array after merge sort is : ";
// for(int i=0;i<r.size();i++)
// {
//     cout<<r.at(i)<<" ";
// }
inputoutput(r,2);
}