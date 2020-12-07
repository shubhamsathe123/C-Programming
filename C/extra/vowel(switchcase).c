#include<stdio.h>
void main()
{
	char ch;
	printf("enter the character\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
                case 'i':
		case 'o':
		case 'u':
	  printf("%c is vowel\n",ch);
	  break;
	    default :
	  printf("%c is normal character",ch);
	  break;
	}
}
