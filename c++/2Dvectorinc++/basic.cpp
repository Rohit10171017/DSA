#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1;    // v1 = {1,2,3,4}  when we give size to the vector while initializing like v(5)
    v1.push_back(1);                    // - if we try to access element using invalid indices which do not
    v1.push_back(2);                    //    exist some compiler will give error some give output as zero.
    v1.push_back(3);                 
    v1.push_back(4);   // but when we do push_back without giving size to vector it won't give error

    vector<int>v2;    // v2 = {10,9,8}
    v2.push_back(10);
    v2.push_back(9);
    v2.push_back(8);

    vector<int>v3;    // v3 = {5}
    v3.push_back(5);

    vector< vector<int> > v;  // v = {{1,2,3},{10,9,8},{5}};
    // v.push_back(3); -> error
     v.push_back(v1);    // 2D vector is a vector of vectors 
     v.push_back(v2);
     v.push_back(v3);

     cout<<v[1][3]; // invalid index // in output we get zero a we written in above comment 

}