#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class A
{
	private:
		int n;
	public:	
		public:
		
		void display()
		{
			cout<<"Enter the number of iterations : ";
			cin>>n;
			for(int i=0;i<n;i++)
			{
				cout<<"Hello Word\n";
			}
			
		}
};

int main()
{
	A obj;
	obj.display();
	return 0;
}
