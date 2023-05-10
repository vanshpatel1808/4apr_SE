#include<stdio.h>
main()
{
	int marks[5]; 
	int i,total=0; 
	for(i=0;i<5;i++) 
	{
		printf("Enter your value %d :- ",i+1);   
        scanf("%d",&marks[i]);  
	}
	for(i=0;i<5;i++) 
	{
		printf("\n%d",marks[i]);  
		
	}
	
}

