#include<stdio.h>
int maxNo()//function declaration
{
//function define
 int a,b;
 printf("enter two no:\n");
 scanf("%d%d",&a,&b);
 if(a>b)
 return a;
 else
 return b;
 }
 //function call
 void main()
 {
 int max;
 max=maxNo();
 printf("%d is a max no:\n",max);
 }

