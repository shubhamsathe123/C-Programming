#include<stdio.h>
void main()
{
	int no,i,cnt=0;
	printf("enter the no");
	scanf("%d",&no);
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		cnt++;
		{
			printf("%d is prime no\n",no);
		}
		if(cnt>0)
		{
			printf("%d is not prime no\n",no);	
		}
	}
}
