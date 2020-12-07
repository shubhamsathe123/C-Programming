#include<stdio.h>
void main()
{
int no,i,j,k,l;
printf("enter the no of rows:\n");
scanf("%d",&no);

for(i=4;i>=1;i--)
 {
  for(j=1;j<=i;j++)
  {
   printf(" ");
  }
  for(k=4;k>=1;k--)
  {
   for(l=1;l<=4;l++)
   printf("%d",l);
  }
  printf("\n");
 }
}
  
