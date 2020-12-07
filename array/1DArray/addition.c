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
		sum=sum+arr[i];
	}
	printf("sum of array elements is %d\n",sum);
}
