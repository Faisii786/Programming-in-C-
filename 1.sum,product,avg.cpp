#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,sum,product;
	float average;
	printf("Enter 4 numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	sum=a+b+c+d;
	product=a*b*c*d;
	average=sum/4.0;
	
	printf("sum of all number:%d\n",sum);
	printf("product of all numbers:%d\n",product);
	printf("average of all numbers:%f",average);
	
	return 0;
	
}
