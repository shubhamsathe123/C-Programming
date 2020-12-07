#include<stdio.h>
#define size 2
union Employee
{
	int id;
	char name[15];
	float salary;
}s1;
typedef union Employee Emp;
void main()
{
	int i;
	printf("Enter Roll No. and Name of Students: ");
	
	scanf("%d%s%f",&s1.id,&s1.name,&s1.salary);
	
	
	printf("Emp id: %d\n",s1.id);
	printf("Name: %s\n",s1.name);
	printf("Salary: %f\n",s1.salary);
	
	
	printf("size of union= %d\n",sizeof(Emp));
	printf("size=%d\n",sizeof(s1.name));
	printf("size=%d\n",sizeof(s1.id));
	printf("size=%d\n",sizeof(s1.salary));
	
}

