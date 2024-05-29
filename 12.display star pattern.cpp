#include <iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"Enter number of rows:"<<endl;
	cin>>rows;
	for (int i=rows;i>=0;i--)
	{
	for (int j=1;j<=2*rows;j++)
	{
	if (j<=i)
	cout<<"*";
	else
	if(i>(2*rows-j))
	cout<<"*";
	else
	cout<<" ";
	}
	cout<<endl;
	}
	return 0;

}
