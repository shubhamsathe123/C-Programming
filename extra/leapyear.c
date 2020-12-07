#include<stdio.h>
void main()
{
	int year;
	printf("enter the value of year");
	scanf("%d",&year);
	if(year%400==0 && year%4==0)
	{
		if(year%100!=0)
		{
			printf("%d is leap year",year);
		}
		else
		{
		printf("%d is not leap year",year);	
		}
	}
}
