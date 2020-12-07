#include<stdio.h>

void main()

{
   
 int a,b,c,max;

   printf("enter the value of a,b and c\n");
 
   scanf("%d%d%d",&a,&b,&c);

   max=(a>b && a>c) ? printf("a") : (b>c) ? printf("b") : printf("c");
 
   printf("%d is maximum no",max);

}
    
    