#include<stdio.h>
void main()
{
int i,range;
int arr[100];
printf("Enter Number Range :\n");
scanf("%d",&range);

arr[0]=0;
arr[1]=1;

  for(i=2;i<range;i++)
  {  
    arr[i]=arr[i-1]+arr[i-2];
  }
 printf("Fibonacci Series is :\n");
    for(i=0;i<range;i++)
     {
       printf("%d \n",arr[i]);
     }
printf("Fibonacci Series Ends \n");   
}
 

