#include<stdio.h>
main()
{
	int row,col,base;
	for(row=5;row>=1;row--)
	{
		for(col=1;col<row;col++)
		{
			printf(" ");
		}
		for(base=5;base>=row;base--)
		{
		  printf("*");	
		}
		printf("\n");
	}
}
