#include<stdio.h>
#include<conio.h>
int main()
{
	
	int ageInYears,ageInDays,ageInMonths;
	printf("Enter your age in years");
	scanf("%d",&ageInYears);
	ageInMonths=ageInYears*12;
	printf("Your age in months is %d\n",ageInMonths);
	ageInDays=ageInYears*365;
	printf("Your age in days is %d\n",ageInDays);
	
	return 0;
	
}
