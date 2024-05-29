#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int arr[50],count=0;
	int i;
	cout<<"Enter 5 integer values:";
	for(i=0;i<=4;i++)
	{
		cin>>arr[i];
	
	if((arr[i]>=50)&&(arr[i]<=60))
	
	count++;
    }
    cout<<"Number of person in the age group 50 & 60="<<count;
	return 0;
}
