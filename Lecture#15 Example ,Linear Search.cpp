#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int arr[5],num,i,n,flag=0,pos;
	cout<<"Enter size of an array:";
	cin>>n;
	cout<<"Enter elements of an array:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number to be search:";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{
	
		flag=1;
		pos=i+1;
		break;
	}
	}
	if(flag==0)
	{
		cout<<"Number not found:";
	}
	else
	{
		cout<<"Found  at possition:"<<pos;
	}	
	
	return 0;
}
