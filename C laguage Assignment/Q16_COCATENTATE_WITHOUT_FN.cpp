#include <stdio.h>
main() 
{
    char str1[100], str2[100];
    int i, j;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; i++);

    for (j = 0; str2[j] != '\0'; j++, i++) 
	{
        str1[i] = str2[j];
    }

    str1[i] = '\0';

    printf("Concatenated string: %s\n", str1);

    
}
