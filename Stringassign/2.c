#include<stdio.h>

void main()
{	
	int i,j;
	char s1[10];
	char s2[10];
	
	printf("Enter 1st String in small letters:");
	scanf("%s",s1);
	
	printf("Enter 2st String in capital letters:");
	scanf("%s",s2);

	for(i=0;s1[i]!=NULL;i++);
		for(j=0;s2[j]!=NULL;j++,i++)
		{
			s1[i]=s2[j];
		}
	s1[i]=NULL;
	printf("\n%s\n",s1);
}
