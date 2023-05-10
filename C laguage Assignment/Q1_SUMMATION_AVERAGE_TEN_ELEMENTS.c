#include<stdio.h>
main()
{
	int elements[10];
	int i,total=0;
	
	for(i=0;i<10;i++)
	{
			printf("Enter the number :- ",i+1);
			scanf("%d",&elements[i]);
		
	}
	for(i=0;i<10;i++)
	{
	 printf("\n%d",elements[i]);
	 total+=elements[i];
	}
	printf("\nThe sum of given elements = %d",total);
	printf("\nThe average of given elements = %d",total/10);

}

