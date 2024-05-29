#include<stdio.h>
#include<conio.h>
int main()
{
	
	int marks;
	printf("Enter your test marks:");
	scanf("%d",&marks);
	if(marks >=90)
	{
	printf("A Grade");
	}
	else 
	if(marks >=80)
	{
	printf("B Grade");
	}
	else
	if(marks >=70)
	{
	printf("C Grade");
	}
	else
    if(marks >=60)
    {
	printf("D Grade");
    }
    else
    if(marks >=40)
    {
	printf("E Grade");
	}
	else	
   {
	printf("F Grade");
   }
				
	return 0;

}

