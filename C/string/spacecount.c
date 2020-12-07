#include<stdio.h>
#include<string.h>
int mystrspacecount(char* s);
void main()
{
	char str[100];
	int count;
	printf("Enter string:\n");
	gets(str);
	count=mystrspacecount(str);
	printf("count of word in string is:%d\n",count);
}
int mystrspacecount(char* s)
{
	int i=0,l=0;
	while(s[i]!='\0')
	{
		if(s[i]==' ')
		
		{
			
			l++;
		}
	i++;
	}
	
	return l;
}

