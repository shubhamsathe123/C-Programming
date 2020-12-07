#include<stdio.h>
void main()
{
	float speed,distance,time;
	printf("enter the values of distance and time");
	scanf("%f%f",&distance,&time);
	printf("entered values of distance and time are %f\n%f\n",distance,time);
	speed=distance/time;
	printf("speed is %f",speed);
}
