#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("value of a and b is %d\n%d\n",a,b);
}
