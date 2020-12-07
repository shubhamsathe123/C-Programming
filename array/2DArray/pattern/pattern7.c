#include<stdio.h>
void main()
{
int i,j,no;
char ch;
printf("enter the no of rows:\n");
scanf("%d",&no);
for(i=no;i>=1;i--)
{
 ch='A';
 for(j=1;j<=i;j++)
 {
 printf("%c",ch);
 ch=ch+1;
 }
 printf("\n");
}
}
 

