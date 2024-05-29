#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int arr[5];
	cout<<"Enter 5 integer value:";
	for(int i=0;i<=4;i++)
	{
		cin>>arr[i];
	}
	cout<<"the element stored in array is:";
	for(int i=0;i<=4;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
}
