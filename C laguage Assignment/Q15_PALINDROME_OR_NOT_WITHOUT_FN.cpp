#include <stdio.h>
main() 
{
    char str[100];
    int i, j, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (len = 0; str[len] != '\0'; len++);

    for (i = 0, j = len - 1; i < j; i++, j--) 
	{
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for (i = 0; i < len; i++) 
	{
        if (str[i] != str[len - 1 - i]) 
		{
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);

}
