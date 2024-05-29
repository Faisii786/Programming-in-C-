#include<stdio.h>
#include<conio.h>
int main()
{
	int score;
	printf("enter your test score\n");
	scanf("%d",&score);
	if(score>=90)
	printf("A Grade");
	else
	if(score>=80)
	printf("B Grade");
	else
	if(score>=70)
	printf("C Grade");
	else
	if(score>=60)
	printf("D Grade");
	else
	printf("F Grade");
	return 0;
}
