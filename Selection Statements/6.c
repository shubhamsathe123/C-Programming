#include<stdio.h>
void main()
{
	int x,y,z;;
	printf("\n Enter Three Numbers \n");
	scanf("%d%d%d",&x,&y,&z);
	if(x>y && x>z)
	{
		printf("\n x is grteater among all,x=%d \n",x);
	}
	else if(y>x && y>z)
	{
		printf("\n y is Greater among all, y=%d \n",y);
	}
	else if(z>x && z>y)
	{
		printf("\n z is greatest, x=%d \n",z);
	}
}
