#include<stdio.h>
void main()
{
	int a=100,*ptr;
	ptr=&a;
	printf("%d\n",ptr);
	ptr=ptr+2;
	printf("%d\n",ptr);
}
