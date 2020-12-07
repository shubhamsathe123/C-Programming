#include<stdio.h>
void main()
{
	int cp,fcp;
	char b;
	printf("Enter the Cost Price of the Item");
	scanf("%d",&cp);
	printf("Customer is student or not  y/n");
	scanf("%c",&b);
	if(b=='y'&& cp>500){
		printf("you get 10 percent of discount");
		fcp=(cp*10)/100;
		cp=cp-fcp;
		printf("Final cost prince is %d",cp);
	}
	else if(b=='y'&& cp<500){
		printf("You get 5 percent of discount");
		fcp=(cp*5)/100;
		cp=cp-fcp;
		printf("Final cost price is %d",cp);
	}
	else if(b=='n'&&cp>500){
		printf("you get discount of 8 percent");
		fcp=(cp*8)/100;
		cp=cp-fcp;
		printf("Final Cot price is %d",cp);
	}
	else{
		printf("you get 2 percent discount");
		fcp=(cp*2)/100;
		cp=cp-fcp;
		printf("Final cost price is %d",cp);
	}
}