#include<iostream>
using namespace std;
int higestDigit(int x)
{
    int max = -1;
    while(x)
    {
        if(max < x%10)
            max = x%10;
        x=x/10;
    }
    return max;
}
int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
    cout<<"Higest digit is "<<higestDigit(x);
    return 0;
}
