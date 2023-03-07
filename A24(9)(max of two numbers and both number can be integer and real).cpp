#include<iostream>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    return a;
    else
        return b;
}
float max(float x,float y)
{
    if(x>y)
    return x;
    else
        return y;
}
int main()
{
    int a,b;
    float x,y;
    cout<<"Enter the value of a and b ;";
    cin>>a>>b;
    cout<<"Enter the value of x and y ;";
    cin>>x>>y;
    cout<<"The max b/w a or b is :"<<max(a,b)<<endl;
    cout<<"The max b/w x or y is :"<<max(x,y)<<endl;
    return 0;
}
