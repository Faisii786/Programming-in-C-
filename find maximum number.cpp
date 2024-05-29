#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d is maximum number",a);
    else
    if(b>a&&b>c)
    printf("%d is maximum number",b);
    else
    printf("%d is maximum number",c);
	return 0;
}
