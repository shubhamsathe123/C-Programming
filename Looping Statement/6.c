#include<stdio.h>
void main()
{
	int i,a,f=1;
	printf("\n Enter any no. \n");
	scanf("%d",&a);
	
	for(i=a;i>0;i--)
	{
		f=f*i;
	}
	printf("Factorial of a no. is: %d\n",f);
}
