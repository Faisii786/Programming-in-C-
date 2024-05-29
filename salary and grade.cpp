#include<stdio.h>
#include<conio.h>
int main()
{
	int salary,grade;
	float bonus;
	printf("enter your salary and grade");
	scanf("%d%d",&salary,&grade);
	if(grade>15)
	bonus=salary*50/100;
	else
	bonus=salary*25/100;
	salary=salary*bonus;
	printf("your salary is %d rupees",salary);
	return 0;
}
