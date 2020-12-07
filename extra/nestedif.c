#include<stdio.h>
void main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a%3==0)
	{
		if(a%5==0)
		{
			printf("%d is divisible by 3 and 5\n",a);
		}
		else
		{
			printf("%d is divisible by 3\n",a);
		}
	}
		else-if(a%5==0)
		{
			printf("%d is divisible by 5\n",a);
		}
		else
		{
		printf("%d is invalid\n",a);
		}	
}
