#include<stdio.h>
void main()
{
	int no,i,fact=1;
	printf("enter the number");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
