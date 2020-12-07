#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100],str3[100];
	puts("Enter first string:\n");
	gets(str1);
		
	printf("Entered string is:%s\n",str1);
	printf("Lenght of string is :%d\n",strlen(str1));
	printf("reverse of string:%s\n",strrev(str1));
	printf("copy first string to second string:%s\n",strcpy(str2,str1));
	
	puts("Enter second string:\n");
	gets(str3);
	
	int i=strcmp(str1,str3);
	if(i==0)
	printf("two string are equal\n");
	else
	printf("two string are not equal\n");
	
	printf("concatinated string is :%s\n",strcat(str1,str3));
}
	
