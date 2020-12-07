#include<stdio.h>
void main()
{
int arr[100],n,i,j;
printf("enter the no of array elements:");
scanf("%d",&n);
printf("enter the array elements/n");
 for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
   }
    for(i=0;i<n;i++)
    {
     printf("address of %dth element is:%p\n",i,(arr+i));
      printf("value of %dth index is:%d\n",i,*(arr+i));
    }
}
     
