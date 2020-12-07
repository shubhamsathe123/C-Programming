#include<stdio.h>
void main()
{
	int *ptr[100],a=10,b=20,c=30,i;
	ptr[0]=&a;
	ptr[1]=&b;
	ptr[2]=&c;
	
	for(i=0;i<3;i++)
	{
		printf("%u\n",ptr[i]);
	}
	
		for(i=0;i<3;i++)
	{
		printf("%d\n",*ptr[i]);
	}
}
