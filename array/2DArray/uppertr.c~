#include<stdio.h>
void main()
{
 	int r,c,i,j,m[10][10];
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

//logic for upper triangular matrix
for(i=0;i<r;i++)
{
   for(j=0;j<c;j++)
   {
    if(i>j)
     {
     m[i][j]=0;
   }
   }
 }
  
//display the output
printf("upper triangular matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
	printf("\n");
	}
}
