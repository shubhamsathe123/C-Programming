/*Write a C program to input any character and check whether it is alphabet, digit or special character.*/
#include<stdio.h>

void main()
{
	char n;
	printf("Enter any input\n");
	scanf("%c",&n);
	if(n>=65 && n<=90 || n>=97 && n<=122)
	{
		printf("Given is alphabet\n");
	}
	
	else if(n>=48 && n<=57)
	{
		printf("Digit\n");
	}
	else
	{
		printf("Special Character\n");
	}
}
