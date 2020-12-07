#include<stdio.h>
#include<string.h>
char* mystrcat(char* s1,char* s2);
void main()
{
	char str1[100],str2[100];
	printf("Enter first string:\n");
	gets(str1);
	printf("Enter second string:\n");
	gets(str2);
	mystrcat(str1,str2);
	printf("Concatinated string is:%s\n",str1);
}
char* mystrcat(char* s1,char* s2)
{
	int i=0,j=0;
	while(s1[i]!='\0')
	{
		i++;
	}
	while(s2[j]!='\0')
	{
		s1[i]=s2[j];
		i++;
		j++;
	}
	s1[i]='\0';
	return s1;
}

