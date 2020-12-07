#include<stdio.h>
#include<string.h>
int mystrcmp(char* str1,char* str2);
int mystrlen(char* s);
void main()
{
	char str1[100],str2[100];
	int l1,l2,result;
	printf("Enter first string:\n");
	gets(str1);
	printf("Enter second string:\n");
	gets(str2);
	
	l1=mystrlen(str1);
	printf("First string length=%d\n",l1);
	
	l2=mystrlen(str2);
	printf("second string length=%d\n",l2);
	
	if(l1!=l2)
	printf("two string can't compaire\n");
	else
	{
		result=mystrcmp(str1,str2);
		if(result==0)
		printf("two string are equal\n");
		else
		printf("two string are not equal\n");
	}
}

int mystrlen(char* s)
{
	int i,l=0;
	for(i=0;s[i]!='\0';i++)
	{
		l++;
	}
	return l;
}

int mystrcmp(char* str1,char* str2)
{
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]-str2[i]!=0)
		{
			return str1[i]-str2[i];
		}
	return 0;
	}
}

