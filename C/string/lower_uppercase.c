#include<stdio.h>
#include<string.h>
char* mystrlower(char* s);
char* mystrupper(char* s);
void main()
{
	char str[100];
	printf("Enter string:\n");
	gets(str);
	 mystrlower(str);
	printf("string after lower case:%s\n",str);
	 mystrupper(str);
	printf("string after upper case:%s\n",str);
}
char* mystrlower(char* s)
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			s[i]=s[i]+32;
		}
	i++;
	}
	return s;
}
char* mystrupper(char* s)
{
	int i=0;
	while(s[i]!='\0')
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	i++;
	}
	return s;
}
