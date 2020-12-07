#include<stdio.h>

struct Employee
{
	int id;
	char name[15];
	float salary;
}s;
typedef struct Employee emp;

void display(emp s)
{
	printf("id=%d\nname=%s\nsalary=%f\n",s.id,s.name,s.salary);
}
void main()
{
	printf("Enter details of Employee:\n");;
	scanf("%d%s%f",&s.id,s.name,&s.salary);
	display(s);
}
