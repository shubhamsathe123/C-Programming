#include<stdio.h>
void main()
{
 	int r,c,i,j,m1[10][10],m2[10][10],result[10][10];
	printf("Enter no of rows and coloms:\n");
	scanf("%d%d",&r,&c);
	printf("Enter first matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	
	printf("Enter second matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			result[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("result matrix:\n");
	for(i=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	printf("%d\t",result[i][j]);
	}
	printf("\n");
	}
}

