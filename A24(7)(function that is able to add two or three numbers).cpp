#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    return a+b+c;
}
int main()
{
    cout<<"The addotion of two number is "<<add(7,8)<<endl;
    cout<<"The addition of three number is "<<add(9,6,7)<<endl;
    return 0;
}
