// Program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the value of x and y :";
    cin>>x>>y;
    x = x+y;
    y = x-y;
    x = x-y;
    cout<<"After swaping :"<<x <<" "<<y;
    return 0;
}