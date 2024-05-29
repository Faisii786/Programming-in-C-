#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"Enter the number : ";
	cin>>n;
	if(n%2==0)
	{
		cout<<n <<" is Even";
	}
	else
	{
		cout<<n <<" is odd";
	}
	return 0;
}
