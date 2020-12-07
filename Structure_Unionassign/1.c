#include<stdio.h>
#define size 10

struct Student
{
	int roll;
	char name[];
}s;

void main()
{
	//struct Student s1;	// s & s1 both works as same
	int i;
	printf("Enter Roll No. and Name of Students: ");
	for(i=0;i<3;i++)
	{
	scanf("%d%s",&s.roll,&s.name[i]);
	}
	for(i=0;i<3;i++)
	{
	printf("\n Roll no.: %d \t Name: %c\n",s.roll,s.name[i]);
	}
	
}
