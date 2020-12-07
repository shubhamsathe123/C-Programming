#include<stdio.h>
void main()
{
	int n,i,arr[80],temp,j;
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
		if(arr[i]>arr[j])
		{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		}
	}
	}
	printf("array in assending order is:\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",arr[i]);
	}
}

