#include<iostream>
using namespace std;

//Pointers in C++
// Data type which hold adress of other data types

int main()
{
	int a=6;
	// Adress of a assign to b beacause of Pointer
	int* b=&a;
	
	
	// &Adress of operator and print Adress of a
	cout<<&b<<endl;
	
	// *Dereference operator and print value of a
	cout<<*b;
	
	return 0;
}
