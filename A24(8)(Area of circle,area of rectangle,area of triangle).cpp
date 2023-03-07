#include<iostream>
using namespace std;
float area (int r)
{
    return (3.14*r*r);
}
int area(int x,int y)
{
    return x*y;
}
float area(float b,float h)
{
    return (0.5*b*h);
}
int main()
{
    int x,y,r;
    float b,h;
    cout<<"Enter the length or bredth of rectangle ";
    cin>>x>>y;
    cout<<"Enter the radius of circle ";
    cin>>r;
    cout<<"Enter the bredth or hight of tringle ";
    cin>>b>>h;
    cout<<"\n The area of circle is "<<area(r)<<endl;
    cout<<"\nThe area of rectangle is "<<area(x,y)<<endl;
    cout<<"\nThe area of tringle is "<<area(b,h)<<endl;
    return 0;
}
