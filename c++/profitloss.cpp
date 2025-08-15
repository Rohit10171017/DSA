#include<iostream>
using namespace std;
int main()
{
    int sp,cp;//alloting memory 
    cout<<"enter the cost price : ";//asking user to enter cost price
    cin>>cp;
    cout<<"enter the selling price : ";//aasking user to enter selling price
    cin>>sp;
    int change = sp - cp ;//finding chage in the selling price and cost price
    if(change>0)//applying condition to check weather seller made profit or loss
    {
        cout<<"seller made profit of : "<<change;

    }
    else if(change==0)
    {
        cout<<"the seller got no profit no loss";
    }
    else if(change<0)
    {
        cout<<"the seller made loss of : "<<change;
    }
}