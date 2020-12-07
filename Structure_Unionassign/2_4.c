#include<stdio.h>
#define size 5
struct Employee
{
	int id;
	char name[15];
	float salary;
};
typedef struct Employee emp;
void main()
{
	int i;
	emp s1[5];	
	printf("Enter Roll No. and Name of Students: ");
	for(i=0;i<size;i++)
	{
	scanf("%d%s",&s1[i].id,&s1[i].name);
	}
	for(i=0;i<size;i++)
	{
	printf("Emp id: %d\t",s1[i].id);
	printf("Name: %s\n",s1[i].name);
	}
	
	printf("size of struct= %d",sizeof(emp));
	
}
