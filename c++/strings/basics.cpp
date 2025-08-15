#include<iostream>
using namespace std ;
int main()
{
    // char str[] = {'a','b','c','d','e'}; //always give size one more than no of characters
    char str[] = "abcde";   
    // for(int i=0;str[i]!='\0';i++)
    // {
    //     cout<<str[i]<<" ";
    // }

    cout<<(int)str[5]; // we get output as 0 ,which is ASCI value of null character '\0'
                       // which confirms that there will be  always default null character at the end of the string
}