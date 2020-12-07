#include<stdio.h>
//function declaration
void evenOdd(int no);
void main()
{
 int n;
 printf("enter the no:\n");
 scanf("%d",&n);
 evenOdd(n);//function call
 }
 void evenOdd(int no)
 {
  if(no%2==0)
  {
  printf("%d is even no",no);
  }
  else
  {
   printf("%d is odd no",no);
  }
 }
