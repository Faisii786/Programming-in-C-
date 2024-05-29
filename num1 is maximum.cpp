#include<stdio.h>
#include<conio.h>
int main ()
{
	int num1,num2;
	printf("enter two numbers to find maximum");
	scanf("%d%d",&num1,&num2);
	switch(num1>num2)
	{
		case 0:
			printf("%d is maximum",num2);
			break;
		case 1:
		    printf("%d is maximum",num1);
			break;	
	}
	return 0;
}
