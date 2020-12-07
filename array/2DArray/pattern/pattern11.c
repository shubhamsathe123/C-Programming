#include<stdio.h>
void main()
{
int no,i,j,k;
printf("enter the no of rows:\n");
scanf("%d",&no);

for(i=4;i>=1;i--)
 {
  for(j=1;j<=i;j++)
  {
   printf(" ");
  }
  for(k=1;k<=4;k++)
  {
   printf("%d",k);
  }
  printf("\n");
 }
}
  
