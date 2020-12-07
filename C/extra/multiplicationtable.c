#include<stdio.h>
void main()
{
	int i,no,table;
	printf("enter the no\n");
	scanf("%d",&no);
	i=1;
	while(i<=10)
	{
	    table=i*no;
		printf("%d\n",table);
		i++;
	}
}
