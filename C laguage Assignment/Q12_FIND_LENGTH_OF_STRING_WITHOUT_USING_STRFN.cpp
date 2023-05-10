#include <stdio.h>
main() 
{
    char string[100];
    int length = 0;
    
    printf("Enter a string: ");
    scanf("%s", string);
    for (int i = 0; string[i] != '\0'; i++) 
	{
        length++;
    }
    
    printf("The length of the string is: %d", length);
    
}
