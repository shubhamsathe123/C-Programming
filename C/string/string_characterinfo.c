#include<stdio.h>
void main()
{
char ch;
printf("Enter Any Character :\n");
scanf("%c",&ch);
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
	{
		printf("%c is an Alphabet.\n",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is a Digit.\n",ch);
	}
	else if(ch=='@' ||ch=='#'||ch=='$'||ch=='%'||ch=='&'||ch=='*')
	{
		printf("%c is a Special Character.\n",ch);
	}
	else
	{
		printf("wrong input\n");
	}
}

