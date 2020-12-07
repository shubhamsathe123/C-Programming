#include<stdio.h>
#include<string.h>
char* mystrpalindrome(char*str);
void main()
{
char str[100];
printf("Enter String :\n");
gets(str);
mystrpalindrome(str);
}
char* mystrpalindrome(char*str)
{
int i=0;
int len=strlen(str)-1;
for(  ;i<len;i++,len--)
{
	if(str[i]!=str[len])
	{
		printf("%s is Not a Palindrome String.\n",str);
		return;
	}
}
printf("%s is a Palindrome String.\n",str);
}


