#include<stdio.h>
void main()
{
	int arr[100],i,n,max;
	printf("Enter no of elements:\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	printf("maximum no in array=%d\n",max);
}
