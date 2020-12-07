#include<stdio.h>

void main()
{
	int r,sum=0,n,temp;
	
	printf("Enter any digit: ");
	scanf("%d",&n);
	temp=n;
	while(temp>0)
	{	
		r=temp%10;
		sum=(sum*10)+r;
		temp=temp/10;
	}
		if(sum==n)
		
		printf("No. is Palindrome: %d \n",n);
		
		else
		
		printf("No. is not Palindrome %d\n",n);

}
