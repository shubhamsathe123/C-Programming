#include<stdio.h>
int fact(int n);
void main()
{
	int n;
	printf("Enter value whose factorial you want: ");
	scanf("%d",&n);
	printf("Factorial is:%d",fact(n));
	printf("\n");
}
int fact(int n)
{
	if(n==1)
	return 1;
	else
	return n*fact(n-1);
}
