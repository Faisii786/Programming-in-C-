#include <iostream>
using namespace std;
int main()
{
	int rows,a=1,i,j;
	cout<<"Input number of rows:";
	cin>>rows;
	for (i=0;i<rows;i++)
	{
	for (j=0;j<=i;j++)
	{
	if (j==0||i==0)
	a=1;
	else
	a=a*(i-j+1)/j;
	cout<<a<<" ";
	}
	cout<<endl;
	}
	return 0;

}
