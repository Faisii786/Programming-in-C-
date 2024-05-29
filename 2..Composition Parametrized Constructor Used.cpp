#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class A
{
	private:
		int a,b;
	public:
		A(int x,int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
		cout<<a<<"\n"<<b<<"\n";
		}
};

class B
{
	public:
		int c;
		B(int z)
		{
			c=z;
		}
		void sho()
		{
			cout<<c<<"\n";
		}
};

class C
{
	private:
		int d,e;
		A o;
		B ob;
	public:
		C(int x,int y,int z,int t,int w):o(x,y),ob(z)
		{
			d=t;
			e=w;
		}
		void dis()
		{
			cout<<ob.c;
			o.show();
			ob.sho();
			cout<<d<<"\n"<<e;
		}
};

int main(int argc, char** argv)
{
	C obj(4,5,6,7,8);
	obj.dis();
	return 0;
}
