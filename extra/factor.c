#include<stdio.h>
void main()
{
	int no,i;
	printf("enter the no");
	scanf("%d",&no);
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			printf("%d\t",i);
		}
	}
}
