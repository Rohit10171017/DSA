#include<iostream>
using namespace std;
int oddsum(int a,int b)
{
    if(a>b) return 0;
    int sum = a + oddsum(a+2,b);
    return sum;
}
int main()
{
    int a, b;
    cout << "enter a value of a : ";
    cin >> a;
    cout << "enter value of b : ";
    cin >> b;
    if (a % 2 == 0) a += 1;
    cout << oddsum(a, b);
}
