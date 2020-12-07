#include<stdio.h>
#include<string.h>
int mystrwordcount(char* s);
void main()
{
	char str[100];
	int count;
	printf("Enter string:\n");
	gets(str);
	count=mystrwordcount(str);
	printf("count of word in string is:%d\n",count);
}
int mystrwordcount(char* s)
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
	if(s[i]=='\0')
	l++;
	return l;
}

