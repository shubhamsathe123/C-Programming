#include<stdio.h>
#include<string.h>
char* mystrrev(char* str);

void main()
{
	char str[100],result;
	printf("Enter string:\n");
	gets(str);
	printf("Reverse of string is:%s\n",mystrrev(str));
}

char* mystrrev(char* str)
{
	char temp;
	int i,j;
	j=0;
	while(str[j]!='\0')
	{
		j++;
	}
	j--;
	i=0;
	for( ;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	return str;
}

