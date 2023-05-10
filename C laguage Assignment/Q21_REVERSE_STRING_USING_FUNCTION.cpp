#include<stdio.h>
#include<string.h>
main()
{
	char str[40];
	printf("\nEnter the string to be reversed :- ");
	scanf("%s",str);
	
	printf("After thre reverse of the string :- %s",strrev(str));
   
}
