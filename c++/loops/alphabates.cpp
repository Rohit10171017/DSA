#include<iostream>
using namespace std ;
int main()
{

for(int i=0;i<=25;i++)
{
    char ch=(char)i+65;//converting ASCI value into corresponding Alphabet using type casting
    cout<<ch<<"-"<<i+65<<"\n";
}
}