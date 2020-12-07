#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter the value of a,b and c");
	scanf("%d%d%d%d\n",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is larger");
	}
	else if(b>a && b>c)
	{
		printf("b is larger");
	}
	else if(c>a && c>b)
	{
		printf("c is larger");
	}
	else
	{
		if(a==b && b==c)
		{
			printf("numbers are equal");
		}
		else
		{
			printf("numbers are not equal");
		}
	}
}

