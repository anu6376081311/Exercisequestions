// Program to calculate the volume of the cuboid
#include<iostream>
using namespace std;
int main()
{
    float h,w,l,V;
    cout<<"Enter the value of h,w,l :";
    cin>>h>>w>>l;
    V = h*w*l;
    cout<<"The volume of the cuboid is :"<<V;
    return 0;
}