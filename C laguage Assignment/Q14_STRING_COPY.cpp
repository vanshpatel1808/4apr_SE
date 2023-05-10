#include <stdio.h>
main() 
{
    char source[100], destination[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(source, 100, stdin);

    while (source[i] != '\0') 
	{
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';

    printf("Given string: %s", source);
    printf("Copied string: %s", destination);
}
