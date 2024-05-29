#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,max;
	a=10;
	b=20;
	c=5;
	max=a;
	if(max<b)
	max=b;
	if(max<c)
	max=c;
	printf("largest value is %d",max);
	return 0;
}
