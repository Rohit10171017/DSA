#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<<"enter the month number of the year(enter the month number between 1 to 12) : ";
    cin>>n;
    switch(n)
    {
        case 1 :
        cout<<"the number of days in january are 31";
        break;
        case 2 :
        cout<<"the number of days in february are 28";
        break;
        case 3 :
        cout<<"the number of days in march are 31";
        break;
        case 4 :
        cout<<"the number of days in april are 30";
        break;
        case 5 :
        cout<<"the number of days in may are 31";
        break;
        case 6 :
        cout<<"the number of days in june are 30";
        break;
        case 7 :
        cout<<"the number of days in july are 31";
        break;
        case 8 :
        cout<<"the number of days in august are 31";
        break;
        case 9 :
        cout<<"the number of days in september are 30";
        break;
        case 10 :
        cout<<"the number of days in october are 31";
        break;
        case 11 :
        cout<<"the number of days in november  are 30";
        break;
        case 12 :
        cout<<"the number of days in december are 31";
        break;
        default :
        cout<<"invalid month number";
    }
        
        
        
    

}