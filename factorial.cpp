#include<iostream>
using namespace std;

// recursion in c++
int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }

    return n* factorial(n-1);
}

/* Dry run
factorial(4) = 4 * factorial(3)
factorial(4) = 4 * 3 factorial(2)
factorial(4) = 4 * 3 * 2 factorial(1)
factorial(4) = 4 * 3 * 2 * 1
factorial(4) = 24
*/

int main()
{
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"The value of "<<a<<" is "<<factorial(a);
    return 0;
}