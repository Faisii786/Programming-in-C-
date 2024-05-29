#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int arr[5];
	int max;
	int i;
	
	cout<<"Enter 5 elements of array:";
	for(i=0;i<5;i++)
	cin>>arr[i];
	
	cout<<"Reverse order of array is:";
	for(i=4;i>=0;i--)
	cout<<arr[i]<<"\t";
	
	return 0;
}
