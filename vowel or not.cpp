#include<stdio.h>
#include<conio.h>
int main()
{
	int ch;
	printf("enter any character");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	printf("you enter vowel");
	else
	printf("you did not enter vowel");
	return 0;
}
