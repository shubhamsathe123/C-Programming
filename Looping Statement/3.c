#include<stdio.h>
void main()
{
	int i,j,n,k;
	printf("Enter no. of Rows: ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			
			printf("* ");
		}
	printf("\n");
	}
}