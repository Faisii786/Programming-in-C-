#include<iostream>
using namespace std;


int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int num1,num2;
    cout<<"Enter the first number";
    cin>>num1;
    cout<<"Enter the second number";
    cin>>num2;

    cout<<"The value is "<<sum(num1,num2);

    return 0;
}