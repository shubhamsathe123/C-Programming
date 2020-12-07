#include<stdio.h>
void main()
{
	int i,j,arr[100],temp,n;
	printf("Enter no of element:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Dessending order of array:\n");
	for(i=0;i<n;i++)
	{
	
		printf("%d\n",arr[i]);
	}
}
