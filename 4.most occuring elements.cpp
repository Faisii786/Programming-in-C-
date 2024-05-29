#include<iostream>
using namespace std;
int main()
{
    int arr[12];
	int i,j,max_count=0;
	cout<<"Enter elements of array:"<<" ";
	for (i=0;i<12;i++)
	{
		cin>>arr[i];
	}
	cout<<"Original array is:"<<endl;
	for (i=0;i<12;i++)
	{
	cout<<arr[i]<<" ";
	}
	int n=12;
	cout<<endl<<"Most occurred element of array is:";
	for (i=0;i<n;i++)
	{
		int count=1;
		for (j=i+1;j<n;j++)
		if (arr[i]==arr[j])
		count++;
		if (count>max_count)
		max_count=count;
	}
	for (i=0;i<n;i++)
	{
		int count=1;
		for (j=i+1;j<n;j++)
		if (arr[i]==arr[j])
		count++;
		if (count==max_count)
		cout<<arr[i]<<endl;
	}
	return 0;


}
