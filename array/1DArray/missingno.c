#include<stdio.h>
void main()
{
	int arr[100],n,i;
	printf("Enter no of elements\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	if(arr[i+1]-arr[i]!=1)
	{
	printf("%d\n",arr[i]+1);
	}
	}
}
	
