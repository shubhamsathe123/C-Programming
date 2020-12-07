#include<stdio.h>
void main()
{
	int a;
	printf("enter the age of the person");
	scanf("%d",&a);
	if(a>=18)
		printf("Person is eligible");
	else
		printf("Not eligible");
}