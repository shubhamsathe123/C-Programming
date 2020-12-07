#include<stdio.h>
void main()
{
	int arr[100],n,i,j,temp;
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
	
	// logic for min max pair
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		if(i==j)
		{
			printf("%d\n",arr[i]);
		}
		else
		{
			printf("%d\t%d\n",arr[i],arr[j]);
		}	
	}
}

