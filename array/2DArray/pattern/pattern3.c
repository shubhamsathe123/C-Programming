#include<stdio.h>
void main()
{
int no,i,j;
printf("enter the no of rows:\n");
scanf("%d",&no);

for(i=1;i<=no;i++)
 {
  for(j=1;j<=i;j++)
  {
   printf("%d\t",i);
   }
  printf("\n");
 }
}
  
