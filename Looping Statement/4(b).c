#include<stdio.h>
void main()
{
	int i,j,n,k;
	printf("Enter no. of Rows: ");
	scanf("%d",&n);
	for(i=1,k=65;i<n && k<=90;i++,k++)
	{
		for(j=1;j<=i;j++)
		{
			
			printf("%c",k);
		}
	printf("\n");
	}
}
