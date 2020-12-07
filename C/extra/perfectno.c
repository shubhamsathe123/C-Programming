#include<stdio.h>
void main()
{
	int no,i,sum=0;
	printf("enter the no\n");
	scanf("%d",&no);
	
	for(i=1;i<no;i++)
	{
	    if(no%i==0)
	    {
	       sum=sum+i;
	    }
	}
	if(sum==no)
	{
	    printf("enter no is perfect no\n");
	}
	else
	{
	    printf("enter no is not perfect\n");
	}
}
