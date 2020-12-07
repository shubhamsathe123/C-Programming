#include <stdio.h>
#include<string.h>
void main()
{
	char str[30];
      	char sub[10];
      	
      	int i, j=0, k,count=0;
      	
      	printf("Enter string");
      	scanf("%s",str);
      	printf("Enter string");
      	scanf("%s",sub);
      	for(i=0;i<strlen(str); i++)
      	{
        	if(str[i] == sub[j])
        	{
          		for(k=i, j=0; j<strlen(sub); j++, k++)
          		{
            			if(str[k]=sub[j]){
            			count++;
            			}
            			else
            			{
            				break;
            			}
                			
                	}
                	if(strlen(sub)==count)
                	printf("%s\tString is sub string\n",sub);
           	}
        }
        if(strlen(sub)!=count)
        	printf("%s\tString is sub not string\n",sub);
 }
