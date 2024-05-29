#include<iostream>
using namespace std;
int main()
{
	int a[15],b[15],i,num;
	cout<<"Size of original array:";
	cin>>num;
	if (num<=15)
	{
	cout<<"enter elements of original array:"<<endl;
	for (i=0;i<num;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<num;i++)
	{
		b[i]=a[i];
	}
	cout<<"Original array elements are:"<<endl;
	for (i=0;i<num;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<"\nElements of copied array are:\n";
	for (i=0;i<num;i++)
	{
	cout<<b[i]<<"\t";
    }
    }
    else
    cout<<"wrong input";
    return 0;

}

