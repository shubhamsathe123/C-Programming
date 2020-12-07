#include<stdio.h>
void main()
{
	int n;
	printf("Enter any No.");
	scanf("%d",&n);
	if(n>0)
	{
	printf("\n No. is Positive \n");
	} 
	else if(n<0)
	{
	printf("\n No. is Negative \n");
	}
	else
	{
	printf("\n No. is Zero \n");
	}
}
