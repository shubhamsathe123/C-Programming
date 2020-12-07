#include<stdio.h>

void volume(); //without parameter & return type

void main()
{
	volume();
}
void volume()
{
	int r,h;
	float v;
	printf("Enter radius & height of Cylinder: ");
	scanf("%d%d",&r,&h);
	v=3.14*r*r*h;
	printf("volume of a cylinder is: %f \n",v);
}
