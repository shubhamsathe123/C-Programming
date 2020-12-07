#include<stdio.h>
void main()
{
	int a,b,C;
	char ch;
	
	printf("Enter your Choice: ");
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':
		{
			printf("Enter Two No.: ");
			scanf("%d%d",&a,&b);
			C=a+b;
			printf("C=%d \n",C);
			break;
		}
		case '-':
		{
			printf("Enter Two No.: ");
			scanf("%d%d",&a,&b);
			C=a-b;
			printf("C=%d \n",C);
			break;
		}
		case '*':
		{
			printf("Enter Two No.: ");
			scanf("%d%d",&a,&b);
			C=a*b;
			printf("C=%d \n",C);
			break;
		}
		case '/':
		{
			printf("Enter Two No.: ");
			scanf("%d%d",&a,&b);
			C=a/b;
			printf("C=%d \n",C);
			break;
		}
		default:printf("Wrong Choice \n");
	}
}
