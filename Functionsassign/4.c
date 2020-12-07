#include<stdio.h>

void main()
{
	int temp,r,sum=0,n;
	
	printf("Enter any No.: ");
	scanf("%d",&n);
	temp=n;
	
	while(temp>0)
	{	
		r=temp%10;
		sum=sum+(r*r*r);
		temp=temp/10;
		
	}
		if(sum==n)
		printf("No. is Armstrong: %d \n",n);
		
		else
		printf("No. is not Armstrong :%d\n",n);

}
