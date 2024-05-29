#include<stdio.h>
#include<conio.h>
int main ()
{
	int weak;
	printf("enter week number(1-7)");
	scanf("%d",&weak);
	switch(weak)
	{
		case1:
			printf("Monday");
			break;
	    case 2:
	    	printf("Tuseday");
	    	break;
	    case 3:
		printf("Wednesday");
		break;
		case 4:
			printf("Thursday");
			break;
		case 5:
		    printf("Friday");
			break;
		case 6:
		    printf("Saturday");
			break;
		case 7:
		    printf("Sunday");
			break;			
		default:
		printf("invalid input");	
	}
	return 0;
}
