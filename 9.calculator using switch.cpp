#include<stdio.h>
#include<conio.h>
int main()
{
	
	char op;
	float a,b;
	printf("Enter an operator (+,-,*,/):");
	scanf("%c",&op);
	printf("Enter two operands:");
	scanf("%f %f",&a,&b);
	switch (op)
	{
	case '+':
	printf("%f + %f =%f",a,b,a+b);
	break;
	case '-':
	printf("%f - %f =%f",a,b,a-b);
	break;
	case '*':
	printf("%f * %f =%f",a,b,a*b);
	break;
	case '/':
	printf("%f / %f =%f",a,b,a/b);
	break;
	default:
	printf("Error");
	}
	
	return 0;

}
