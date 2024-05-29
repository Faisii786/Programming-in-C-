#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class A
{
	private:
		int a,b;
	public:
		A()
		{
			a=4;
			b=5;
		}
		void show()
		{
		cout<<"\n"<<a<<"\n"<<b<<"\n";
		}
};

class B
{
	private:
		int c;
	public:
		B()
		{
			c=6;
		}
		void sho()
		{
			cout<<"\n"<<c<<"\n";
		}
};

class C
{
	private:
		int d,e;
		A o;
		B ob;
	public:
		C()
		{
			d=5;
			e=8;
		}
		void disc()
		{
			cout<<"Data members of A";
			o.show();
			cout<<"Data members of B";
			ob.sho();
			cout<<"Data members of C";
			cout<<"\n"<<d<<"\n"<<e;
		}
};

int main(int argc, char** argv)
{
	C obj;
	obj.disc();
	return 0;
}
