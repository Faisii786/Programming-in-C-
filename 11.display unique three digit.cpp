#include <iostream>
using namespace std;
int main()
{
	string str;
	int amount=0;
	cout<<"Unique three-digit numbers are:"<<endl;
	for (int i=1;i<=4;i++)
	{
	for (int j=1;j<=4;j++)
	{
	for (int k=1;k<=4;k++)
	{
	if(k!=i && k!=j && i!=j)
	{
	amount++;
	cout<<i<<j<<k<<" ";
	}
	}
	}
	}
	cout<<endl<<"Total numbers of three-digit number are:"<<amount<<endl<<endl;
			
	return 0;

}
