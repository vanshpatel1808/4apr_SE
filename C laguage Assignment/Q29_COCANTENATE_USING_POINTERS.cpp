#include <stdio.h>
#include <string.h>
main() 
{
    char str1[200], str2[200], *ptr1, *ptr2;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    ptr1 = str1 + strlen(str1);
    ptr2 = str2; 
    while(*ptr2 != '\0') 
	{
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0'; 
    printf("Concatenated string: %s\n", str1);
}
