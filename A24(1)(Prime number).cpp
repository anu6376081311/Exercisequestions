#include<iostream>
using namespace std;
int prime(int );
int main(){
    int x=15;
    if( prime(x)== 0)
        cout<<"number is prime";
    else
        cout<<"not prime";
        return 0;
}
int prime(int n)
{
int flag = 0;
for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            flag = 1;
    }
    return flag;
}
