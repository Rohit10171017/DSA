#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%2!=0){
        cout<<"NO";
        return 0;
    }
    
   int x=n/2;
   if(x%2==0 )
   {
    cout<<"YES";

   }
 else cout<<"NO";
}