#include<stdio.h>
#include<string.h>
char* mystrcpy(char* str2,char* str1);
void main()
{
	char str1[100],str2[100];
	printf("Enter string:\n");
	gets(str1);
	mystrcpy(str2,str1);
	printf("Copied of string:%s\n",str2);
}

char* mystrcpy(char* str2,char* str1)
{
	int i=0;
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i]='\0';
	return str2;
}
