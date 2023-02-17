// Program to calculate an average of three numbers
#include<iostream>
using namespace std;
int main()
{
    float a,b,c,Avg;
    cout<<"Enter the value of a,b,c:";
    cin>>a>>b>>c;
    Avg = (a+b+c)/3;
    cout<<"The average of three numbers is :"<<Avg;
    return 0;
}