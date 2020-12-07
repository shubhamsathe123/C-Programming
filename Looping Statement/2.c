#include<stdio.h>

void main()
{
	int n,i,sum=0;
	printf("Enter any digit: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		i=n%10;//Remainder
		if(i%2==0)
		{
			sum=sum+i;
		}
		n=n/10;
	}
	printf("Sum=%d\n",sum);
}
