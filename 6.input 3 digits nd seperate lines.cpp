#include<stdio.h>
#include<conio.h>
int main()
{
	
	int a,b,c,d;
	printf("Enter three digit number");
	scanf("%d",&a);
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	printf("%d\n%d\n%d\n",d,c,b);
	
	return 0;
	
}
