#include<stdio.h>
#include<string.h>
void main()
{	
	char s1[10];
	char s2[10];
	int i;
	
	printf("Enter 1st String in small letters:");
	scanf("%s",s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>=97 && s1[i]<=122)
		{
			s1[i]=s1[i]-32;
			printf("%c",s1[i]);
		}
		else 
		{
			printf("%c",s1[i]);
		}
	}
	printf("\n");
	
	printf("Enter 2st String in capital letters:");
	scanf("%s",s2);
	
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>=65 && s1[i]<=90)
		{
			s1[i]=s1[i]+32;
			printf("%c",s1[i]);
		}
		else 
		{
			printf("%c",s1[i]);
		}
	}
	printf("\n");
}
