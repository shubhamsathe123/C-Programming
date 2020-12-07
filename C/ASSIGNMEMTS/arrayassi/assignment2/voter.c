#include<stdio.h>
void main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a>18)
	{
		printf("%d is eligible for voting\n",a);
	}
	else
	{
		printf("%d is not eligible for voting\n",a);
	}
}
