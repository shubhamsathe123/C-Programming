#include<stdio.h>
#include<string.h>
int mystrwovelcount(char* s);
void main()
{
	char str[100];
	int count;
	printf("Enter string:\n");
	gets(str);
	count=mystrwovelcount(str);
	printf("count of wovel in string is:%d\n",count);
}

int mystrwovelcount(char* s)
{
	int i=0,l=0;
	while(s[i]!='\0')
	{
		if(s[i]=='a'||s[i]=='A' || s[i]=='e'||s[i]=='E' || s[i]=='i'||s[i]=='I' || s[i]=='o'||s[i]=='O' || s[i]=='u'||s[i]=='U')
		{
			l++;
		}
		i++;
	}
	return l;
}
 
