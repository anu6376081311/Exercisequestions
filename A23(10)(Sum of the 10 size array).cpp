// Program to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter 10 elements in the array :";
    for(i=0;i<=9;i++)
    {
    cin>>a[i];
    sum=sum+a[i];
    }
    cout<<"The sum of the array is :"<<sum;
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
// int a[10],sum=0;
// cout<<"Enter ten numbers";
// for(int i=0; i<10 ; i++)
//     cin>>a[i];
// for(int i=0 ; i<10 ; i++)
//     sum=sum+a[i];
//     cout<<"the  addition is"<<sum<<endl;
//     return 0;
// }
