#include<stdio.h>
#include<string.h>
int mystrlen(char* s);
void main()
{
	char str[100];
	int len;
	printf("Enter string:\n");
	gets(str);
	len=mystrlen(str);
	printf("Length of string is:%d\n",len);
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
