#include <stdio.h>
float add(float num1, float num2) 
{
    return num1 + num2;
}
float subtract(float num1, float num2) 
{
    return num1 - num2;
}

float multiply(float num1, float num2) 
{
    return num1 * num2;
}
float divide(float num1, float num2) 
{
    return num1 / num2;
}

main()
{
    float num1, num2, result;
    int choice;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("\nEnter your choice :- ");
    scanf("%d", &choice);

    switch (choice) 
	{
        case 1:
            result = add(num1, num2);
            printf("Addition = %.2f\n", result);
            break;

        case 2:
            result = subtract(num1, num2);
            printf("Substraction = %.2f\n", result);
            break;

        case 3:
            result = multiply(num1, num2);
            printf("Multiplication = %.2f\n", result);
            break;

        case 4:
            result = divide(num1, num2);
            printf("division = %.2f\n", result);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

}
