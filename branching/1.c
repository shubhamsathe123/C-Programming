#include<stdio.h>

void main()
{
	int choice,n,year;

	printf("Menu\n");
	printf("1 Find out square and cube\n");
	printf("2 Check year is LEAP or not\n");

	printf("Enter choice:\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:printf("Enter 1 integer:");
			   scanf("\n%d",&n);
			   printf("Square=%d\n",(n * n));
			   printf("Cube=%d\n",(n * n * n));
			   break;

		case 2:printf("Enter year:\n");
			   scanf("\n%d",&year);
			   if(year%400==0 || year%4==0 && year%100!=0)
			   {
			   	printf("%d is leap year\n",year);
			   }
			   else
			   {
			   	printf("%d is not leap year\n",year);
			   }
			   break;

		default:printf("wrong choice\n");
	}


}