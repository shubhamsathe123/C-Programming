#include<stdio.h>
void main()
{
	int no,rem,rev=0,originalno;
	printf("enter the no");
	scanf("%d",&no);
	originalno=no;
	while(no>0)
	{
		rem=no%10;
		rev=(rev*10)+rem;
		no=no/10;
	}
	if(originalno==rev)
	{
	printf("%d is pelindrome no",rev);	
    }    
	else
	{
		printf("%d is not a pelindrome no",rev);	
	}
}
