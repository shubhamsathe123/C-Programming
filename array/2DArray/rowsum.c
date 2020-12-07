#include<stdio.h>
void main()
{
 	int r,c,i,j,m[10][10],sum=0;
	printf("Enter no of rows and coloms:\n");
	scanf("%d%d",&r,&c);
	
	printf("Enter matrix elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
	printf("\n");
	}
	
	//rowwise sum logic
	for(i=0;i<r;i++)
	{
	for(j=0;j<r;j++)
	{
	sum=sum+m[i][j];
	}
	}
printf("%dth row addition is %d",j,sum);
}
