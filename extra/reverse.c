#include<stdio.h>
void main()
{
	int limit,n;
	printf("enter limit");
	scanf("%d",&limit);
	while(limit>=1)
	{
		printf("%d\t",limit--);
	}
}
