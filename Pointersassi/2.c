#include<stdio.h>
float a,b;
float Add(float *,float *);
float main()
{	float x,y,z;
	printf("Enter two number's: ");
	scanf("%f%f",&x,&y);	
	z=Add(&x,&y);
	printf("%f",z);
}

float Add(float *a,float *b)
{
	
	return *a + *b;
}
