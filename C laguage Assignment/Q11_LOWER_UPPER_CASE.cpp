#include<stdio.h>
#include<string.h>
main()
{
	char Name[20];
	printf("Enter your name :- ");
	gets(Name);
	printf("\n Name = %s",Name);
	
    printf("\n lower case = %s",strlwr(Name));  
    printf("\n upper case = %s",strupr(Name));  

}
