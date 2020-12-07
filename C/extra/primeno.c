#include<stdio.h>
void main()
{
	int i,no,count=0;
	printf("enter the no\n");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
	    if(no%i==0)
	    {
	        count++;
	    }
	}
	if(count==2)
	{
	    printf("enter value is prime\n");
	}
	else
	{
	    printf("enter value is not prime\n");
	}
}