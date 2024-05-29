#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,p,j;
	printf("enter a number\n");
	scanf("%d",&n);
	p=1;
	for(j=2;j<=n/2;j++)
	{
		p=0;
	}

	if(p==1)
	{
		printf("the number is prime");
	}
	else
	printf("the number is not prime");
	
     return 0;
}
