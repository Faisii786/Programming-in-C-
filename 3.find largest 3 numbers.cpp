#include<iostream>
using namespace std;
int main()
{
    int arr[8]={25,8,75,1,5,45,79,88},n;
	int i,first,second,third;
	cout<<"Enter size of array:"<<endl;
	cin>>n;
	if (n<5)
	{
	cout<<"Invalid Input";
	return 0;
	}
	cout<<"Original array is:"<<endl;
	for (i=0;i<n;i++)
	cout<<arr[i]<<" ";
		third =first =second;
	for (i=0;i<n;i++)
	{
		if (arr[i]>first)
		{
			third=second;
			second=first;
			first=arr[i];
		}
		else if(arr[i]>second)
		{
			third=second;
			second=arr[i];
		}
		else if(arr[i]>third)
		third=arr[i];
	}
	cout<<"\nThree largest elements are:";
	cout<<first<<"\t"<<second<<"\t"<<third;
	return 0;
}
