#include<iostream>
using namespace std;
int swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}
int main()
{
    int x,y;
    cout<<"Enter two number:"<<endl;
    cin>>x>>y;
     swap(x,y);
     cout<<"Number after swaping "<<x<<" "<<y<<endl;
     return 0;
}
