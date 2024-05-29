#include <iostream>
using namespace std;
int main()
{
	int rows,i,j,space,s;
	cout<<"Input number of rows:"<<endl;
	cin>>rows;
	space=rows-1;
	for (i=1;i<=rows;i++)
	{
	for (s=space;s>=1;s--)
	{
	cout<<" ";
	}
	for (j=1;j<=i;j++)
	cout<<i<<" ";
	cout<<endl;
	space--;
	}
	return 0;

}
