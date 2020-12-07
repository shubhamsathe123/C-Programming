#include<stdio.h>
void main()
{
	int no,rem,sum=0;
	printf("enter the no");
	scanf("%d",&no);
	while(no>0)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;	
	}
	printf("%d is sum of digit",sum);
}
