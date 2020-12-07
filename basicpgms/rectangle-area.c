#include<stdio.h>
void main()
{
	float area,width,height;
	printf("enter the values of width,height");
	scanf("%f%f",&width,&height);
	printf("entered values are %width%height",width,height);
	area=width*height;
	printf("%f",area);
}