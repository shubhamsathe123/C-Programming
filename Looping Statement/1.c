#include<stdio.h>
void main()
{
	int n,i,j,flag=0;
	printf("\n Enter any no. \n");
	scanf("%d",&n);
	if(n==2||n==3)
	{
		printf("Prime\n");
	}
	else
	{
	for(i=0;i<=n/2;i++)
	{
		for(j=2;j<n;j++)
		{	
			if(i%j==0)
			{
				flag==1;
			}
		}
	}
	if(flag==1)
	{
		printf("Not Prime\n");
	}
	else
	{
		printf("Prime\n");
	}
	}
}
