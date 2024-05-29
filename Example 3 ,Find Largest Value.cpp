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
	
    max=arr[0];
    for(i=0;i<5;i++)
    {
    if(arr[i]>max)
    max=arr[i];
    }
    cout<<"Largest element of array is:"<<max;
	
	
	return 0;
}
