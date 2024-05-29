#include<iostream>
using namespace std;
int main()
{
    int x[12]={1,5,7,5,11,14,15,14,15,22,25,22},n=12,i,j;
	cout<<"Original array is:"<<endl;
	for (i=0;i<n;i++)
	cout<<x[i]<<" ";
	cout<<"\nUnique elements of given array are:";
	for (i=0;i<n;i++)
	{
	for (j=0;j<i;j++)
	if (x[i]==x[j])
	break;
	if (i == j)
	cout<<x[i]<<" ";
	}
	return 0;
}

