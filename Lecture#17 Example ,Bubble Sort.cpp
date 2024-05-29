#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n,i,arr[50],j,temp;
	cout<<"Enter total number of elemets:";
	cin>>n;
	cout<<"Enter"<<n<<"Numbers:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=(n-1);i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Elemets stored successfully\n";
	cout<<"Sorted list in ascending order\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
