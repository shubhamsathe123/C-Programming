#include<stdio.h>
void main()
{
	int sub1,sub2,sub3,sub4,sub5,tm,avg;
	printf("enter the values of sub1,sub2,sub3,sub4,sub5");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	printf("entered values of subjects are %d\n%d\n%d\n%d\n%d\n",sub1,sub2,sub3,sub4,sub5);
	tm=sub1+sub2+sub3+sub4+sub5;
	printf("total of the marks is%d\n",tm);
	avg=tm/5;
	printf("average of the marks is%d\n",avg);
}
