#include<stdio.h>
#include<conio.h>
int main()
{
	
	int ch,op;
	printf("Enter a character:");
	scanf("%c",&op);
    if((op >='a'&& op <='z') || (op >='A'&& op <='Z'))
	{
	printf("Given character is Alphabet");
	}
	else if(op >='0' && op <='9')
	{
	printf("Given character is digit");
	}
	else
	printf("Given character is special character");

	return 0;


}


