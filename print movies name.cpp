#include<stdio.h>
#include<conio.h>
int main ()
{
	int num;
	printf("enter the code 1 to 5\n");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("western digital");
			break;
		case 2:
		    printf("3G corporation");
			break;
		case 3:
		    printf("Maxell corporation");
			break;
		case 4:
		    printf("Sony corporation");
			break;
		case 5:
		    printf("Verbation corporation");
			break;
		Default:
		    printf("you entered a wrong code");
							
	}
	return 0;
}
