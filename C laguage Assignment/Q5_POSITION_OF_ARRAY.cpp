#include <stdio.h>
main() 
{
    int a[] = {5, 10, 15, 20, 25};
    int position, element;
    
    printf("Enter a position to retrieve the element: ");
    scanf("%d", &position);
    if (position < 1 || position > sizeof(a[]) / sizeof(a[0])) 
	{
        printf("Invalid position!");
    } else 
	{
        element = a[position - 1];
        printf("The element at position %d is %d", position, element);
    }
}
