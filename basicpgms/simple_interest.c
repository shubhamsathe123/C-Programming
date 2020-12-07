#include<stdio.h>
void main()
{
	int p,n;
	float si,r;
	printf("enter the values of p,n,r \n");
	scanf("%d%d%f",&p,&n,&r);
	printf("entered values are %d%d%2.2f \n",p,n,r);
	si=p*n*r/100;
	printf("%f",si);
}