#include<stdio.h>
void main()
{
	int arr[100],i,n,min;
	printf("Enter no of elements:\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	printf("minimum no of array=%d\n",min);
}                                                                                    
