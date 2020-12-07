#include<stdio.h>
void main()
{
	int arr[100],n,i,j,temp;
	printf("Enter no of elements\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("Reverse array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
