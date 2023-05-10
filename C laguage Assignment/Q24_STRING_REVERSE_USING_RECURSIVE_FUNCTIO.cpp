#include <stdio.h>
#include <string.h>

void reverse(char *str, int start, int end) 
{
    if(start >= end) 
	{ 
        return;
    } 
	else 
	{
        
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        reverse(str, start+1, end-1);
    }
}
main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 

    printf("Original string: %s\n", str);

    reverse(str, 0, strlen(str)-1);

    printf("Reversed string: %s\n", str);

}
