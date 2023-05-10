#include <stdio.h>

main() 
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int max = matrix[0][0];
    printf("Matrix:\n");
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++) 
	{
        for (int j = 0; j < 3; j++) 
		{
            if (matrix[i][j] > max) 
			{
                max = matrix[i][j];
            }
        }
    }
    
    printf("\nThe maximum number in the matrix is: %d\n", max);
}
