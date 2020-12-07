#include<stdio.h>
void main()
{
	const float l=5/9;
	int f,temp;
	printf("enter the value of f");
	scanf("%d",&f);
	//printf("entered value is %d",f);
	temp=((l)*(f-32));
	printf("%d",temp);
}