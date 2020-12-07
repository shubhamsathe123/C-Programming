#include<stdio.h>
void main()
{
	double a;
	int b,*ptr1,*ptr2,*ptr3;
	char c;
		printf("Enter value of a,b,c: ");
		scanf("%lf%d%c",&a,&b,&c);
		ptr1=&a;
		printf("Value=%lf & Address=%d\n",a,ptr1);
		ptr2=&b;
		printf("Value=%d & Address=%d\n",b,ptr2);
		ptr3=&c;
		printf("Value=%c & Address=%d\n",c,ptr3);
}
