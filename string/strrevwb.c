
#include <stdio.h>
#include <string.h>
    void main()
    {
        char str[100];
        int i,l=0;

        printf("Enter a string \n");
        gets(str);

        for (i = 0; str[i]!='\0'; i++)
        {
            l++;
        }
        printf("the length of %s = %d\n", str,l);

        
	for(i=l-1; i>=0; i--)
          {
		printf("%c",str[i]);	
	  }
}

