#include<stdio.h>
	
void main()
{
	int i,j,n=5;
	printf("Enter any no: ");
	scanf("%d",&n);
	for(i=1,j=n;i<=n,j>0;i++,j--)
	{
		if(i==j)
		{
			continue;	
		}
	printf("i=%d\t j=%d \n",i,j);
	}
}
