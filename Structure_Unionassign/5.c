#include<stdio.h>

struct Employee
{
	int id;
	char name[15];
	float salary;

			struct Date
		{
			int dd,mm,yy;
		}d;
}s;


void main()
{
	
	printf("Enter id,name & salary of Employee:\n");
	scanf("%d%s%f",&s.id,s.name,&s.salary);
	
	printf("Enter Date of Joining of Employee:\n");
	scanf("%d%d%d",&s.d.dd,&s.d.mm,&s.d.yy);
	
	printf(" id=%d\t Name=%s\t Salary=%f\n",s.id,s.name,s.salary);
	printf("date of joining=%d%d%d\n",s.d.dd,s.d.mm,s.d.yy);
}
