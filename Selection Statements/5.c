#include<stdio.h>
void main()
{
	float p;
	printf("Enter percentage");
	scanf("%f",&p);
	
	if(p>70)
	{
		printf("A grade");
	}
	else if	(p<=70 && p>=60)
	{
		printf("B+ grade");
	}
	else if	(p<=60 && p>=45)
	{
		printf("B grade");
	}
	else if(p<=45 && p>=35)
	{
		printf("c grade");
	}
	else
	{
		printf("Fail");
	}
}
