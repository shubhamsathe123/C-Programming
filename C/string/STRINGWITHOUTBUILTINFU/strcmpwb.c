#include<stdio.h>
#include<string.h>
void main()
{
       char str1[100],str2[100];
       int i,temp;

       printf("Enter the string1 value: ");
       gets(str1);

       printf(" Enter the String2 value: ");
       gets(str2);

       for(i=0; str1[i]!='\0'; i++)
       {
              if(str1[i] == str2[i])
		{
               temp=1;
		}
              
       }
            if(temp==1)
    		 {
            	 printf("Both strings are same\n");
       		}   
	  else          
        	{
     		printf("Both strings are not same\n");      
       		 }
}     
    

       
