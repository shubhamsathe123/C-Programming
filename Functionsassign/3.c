#include<stdio.h>
void main()
{
	int a=0,b=1,c,i,n;
	printf("Enter value of n");
	scanf("%d",&n);
	//printf("%d\t%d",a,b);
	for(i=0;i<n;i++)
	{
		printf("%d\t",c);
		c=a+b;
		a=b;
		b=c;
		
	}
}
