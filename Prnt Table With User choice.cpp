#include<iostream>
using namespace std;

int main()
{
	cout<<"Wellcome! \nCreated By Faisal Aslam\n"<<endl;
	int a;
	cout<<"Enter The Table Number that You Want:"<<endl;
	cin>>a;
	int b=1;
	int c;
	cout<<"\nTable\n";
	for(int i=0;i<10;i++)
	{
		c=a*b;
		cout<<"6 * "<<b<<" = "<<c;
		cout<<endl;
		b++;
	}
	
	return 0;
}
