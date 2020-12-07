#include<stdio.h>
void main()
{
	int i;
	printf("enter limit");
	scanf("%d",&i);
	while(i>=1)
	{
		printf("%d\t",i--);
	}
}
