#include <stdio.h>

int count_words(char *s) 
{
    int count = 0;
    int state = 0; 
    while (*s) 
	{
        if (*s == ' ' || *s == '\t' || *s == '\n') 
		{
            state = 0;
        }
        else if (state == 0) 
		{
            state = 1;
            count++;
        }
        s++;
    }
    return count;
}
main() 
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Total number of words: %d\n", count_words(str));
    
}
