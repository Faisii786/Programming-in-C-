#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n,i,arr[50],search,start,end,mid,flag=0,loc;
	cout<<"Enter total number of elements:"<<endl;
	cin>>n;
	cout<<"Enter"<<n<< "Number:" <<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter a number to find"<<endl;
	cin>>search;
	start=0;
	end=n-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(search==arr[mid])
		{
			flag=1;
			loc=mid;
			cout<<search<<"Found at location"<<loc;
			break;
		}
	else
	if(search<arr[mid])
	{
		end=mid-1;
	}
	else
	{
		start=mid+1;
	}
    }
	if(flag==0)
	{
		cout<<"Not Found!"<<search<<"is not present in list";
	}
	return 0;
}
