#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float x,float y)
{
    return x+y;
}
float add(int p,float q)
{
    return p+q;
}
int main()
{
    int a,b;
    float x,y,p,q;
    cout<<"Enter the value of a,b :";
    cin>>a>>b;
    cout<<"Enter the value of x,y :"<<endl;
    cin>>x>>y;
    cout<<"Enter the value of p,q :"<<endl;
    cin>>p>>q;

    cout<<"addition of a,b is:"<<add(a,b)<<endl;
    cout<<"addition of x,y is:"<<add(x,y)<<endl;
    cout<<"addition of p,q is:"<<add(p,q)<<endl;
    return 0;
}
