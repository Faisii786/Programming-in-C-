#include<iostream>
using namespace std;

int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int sum(int a,int b,int c)
{
    int d;
    d=a+b+c;
    return d;
}


int main()
{
    cout<<"The value of 2 arguments is "<<sum(3,5)<<endl;
    cout<<"The value of 3 arguments is "<<sum(3,5,7);
    return 0;
}