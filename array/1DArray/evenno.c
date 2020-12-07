#include<stdio.h>
void main()
{
	int arr[100],n,i,sum=0;
	printf("Enter the no of elements:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	if(arr[i]%2==0)
	{
	printf("the even no in array are:\n");
	printf("%d\n",arr[i]);
	}
	}
}
