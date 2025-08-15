#include<iostream>
using namespace std ;
int main()
{
    int y;
    cout<<"enter the day of the week";//asking user to give day number between 1 to 7
    cin>>y;
    switch(y)//using switch statement to print corresponding day to input number
    {
        case 1:
        cout<<"monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"wednesday";
        break;
        case 4:
        cout<<"thursday";
        break;
        case 5:
        cout<<"fridyay";
        break;
        case 6:
        cout<<"saturday";
        break;
        case 7:
        cout<<"sunday";
        break;
        default :
        cout<<"invalid day number ";
    }
    

}

