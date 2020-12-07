#include<stdio.h>
void main()
{
	int a;
	printf("enter the no");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d is positive",a);
	}
	else if(a<0)
	{
		printf("%d is negative",a);
	}
	else
	{
		printf("%d is zero");
	}
}
