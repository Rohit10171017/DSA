//if we initialize vector with size . same as array
// #include<iostream>
// #include<vector>
// using namespace std ;
// int main()
// {
//     vector<int>v(7);
//     for(int i=0;i<v.size();i++)
//     {
//         cin>>v[i];
//     }
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }

//when we initialize vector without size
#include<iostream>
#include<vector>
using namespace std ;
int main()
{
    vector<int>v;
    int n;
    cout<<"enter no  of elememts you want in an array : ";
    cin >> n; // Read the value of n from the user
    //taking input
    cout << "Enter " << n << " elements:" << endl;
    for(int i=0;i<n;i++)
    {
        int y;
        cin >> y;
        v.push_back(y);
    }
    //output
    cout<<"the elements of vector are : ";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
