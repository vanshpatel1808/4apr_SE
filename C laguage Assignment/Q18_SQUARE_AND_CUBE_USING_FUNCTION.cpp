#include <stdio.h>
float square(float a) 
{
    return a*a;
}
float Cube(float a) 
{
    return a*a*a;
}
main()
{
    float a,result;
    int choice;
    printf("Enter your choice:\n");
    printf("1. Square\n");
    printf("2. Cube\n");
    printf("\nEnter your choice :- ");
    scanf("%d", &choice);
    printf("Enter Number: ");
    scanf("%f", &a);

    switch (choice) 
	{
        case 1:
            result = square(a);
            printf("Square = %.2f\n", result);
            break;

        case 2:
            result = Cube(a);
            printf("Cube = %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

}
