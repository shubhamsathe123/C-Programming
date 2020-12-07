#include<stdio.h>
void main()
{
 int val=30;
 int *ptr1;
 int **ptr2;
 
 ptr1=&val;
 ptr2=&ptr1;
 
 printf("value is:%d\n",val);
 printf("address of value is:%p\n",&val);
 
 printf("address of ptr1 is:%p\n",&ptr1);
 printf("address of ptr2 is:%p\n",&ptr2);
 
 printf("value of ptr1(address of val):%p\n",ptr1);
 printf("value of ptr2(address of ptr1):%p\n",ptr2);
 
 printf("value of *ptr1(value):%d\n",*ptr1);
 printf("value of *ptr2(address of value):%p\n",*ptr2);
 printf("value of **ptr2(value):%d\n",**ptr2);
 }
 
 
 
