#include<stdio.h>
void main()
{
	int arr[100],i,n,sum=0,avg;
	printf("Enter no of element:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("%d is sum of elements in the array",sum);
	avg=sum/n;
	printf("%d average of elements in the array\n",avg);
}
