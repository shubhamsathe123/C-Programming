#include<stdio.h>
float v;
void volume(int,int); //with parameter & without return type

void main()
{
	int r,h;	
	printf("Enter value of r & h: ");
	scanf("%d%d",&r,&h);
	printf("Volume= %f \n",v);
	volume(int r,int h);
	printf("volume of a cylinder is: %f \n",v);

}

void volume(int r,int h )
{
double v;
	//int r,h;
	v=3.14*r*r*h;
	printf("volume of a cylinder is: %f \n",v);
}
