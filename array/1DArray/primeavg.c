#include<stdio.h>
void main()
{
	int arr[100],i,j,n,sum=0,avg,cnt=0,c=0;
    printf("Enter no of element:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	} 
	for(i=0;i<n;i++)  
	{
		c=0;
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
		{
			c=1;
			break;
		}
		}
		if(c==0)
		{
			printf("%d\t",arr[i]);
			sum=sum+arr[i];
			cnt++;
		}
	}  
	printf("sum of prime no in array=%d\n",sum);  
	avg=sum/cnt;
	printf("average of prime no in array=%d\n",avg);  
}
