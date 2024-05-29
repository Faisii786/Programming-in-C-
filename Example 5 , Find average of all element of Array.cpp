#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int arr[10];
	int i;
	int sum=0,avg=0;
	cout<<"Enter 10 elements of an array:\n";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
		sum=sum+arr[i];
	}
	cout<<"\nthe elements of an array is:";
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\nSum of total is:"<<sum;
	avg=sum/10;
	cout<<"\nThe average of array is:"<<avg;
	
	return 0;
}
