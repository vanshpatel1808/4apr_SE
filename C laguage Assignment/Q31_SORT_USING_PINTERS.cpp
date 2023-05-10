#include <stdio.h>

void sort(int *ptr, int n) {
    int i, j, temp;

    
    for(i = 0; i < n-1; i++) 
	{
        for(j = 0; j < n-i-1; j++) {
        	
            if(*(ptr+j) > *(ptr+j+1)) 
			{
                temp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = temp;
            }
        }
    }
}

main() 
{
    int i, n, arr[200],*ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }

    ptr = arr; 

    sort(ptr, n); 

    printf("Sorted array: ");
    for(i = 0; i < n; i++) 
	{
        printf("%d ", *(ptr+i));
    }

    
}
