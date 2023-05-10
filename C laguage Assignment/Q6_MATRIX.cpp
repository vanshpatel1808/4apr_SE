#include<stdio.h>
main()
{
	int a[2][3]={1,2,3,7,8,5};
	int b[2][3]={1,1,4,6,2,9};
	int c[2][3];
    int row,col;
    printf("\nFirst matrix \n");
    for(row=0;row<2;row++)
    {
    	for(col=0;col<3;col++)
    	{
    		printf(" %d ",a[row][col]);
		}
		printf("\n");
	}

    printf("\nSecond matrix \n");
    for(row=0;row<2;row++)
    {
    	for(col=0;col<3;col++)
    	{
    		printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
}
