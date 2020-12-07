#include<stdio.h>
void main()
{
int no,i,j;
printf("enter the no of rows:\n");
scanf("%d",&no);

for(i=no;i>=1;i--)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d\t",j);
   }
  printf("\n");
 }
}
  
