#include<stdio.h>
main()
{
	int year;
	printf("Enter Year :- ");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("%d is a leap year ",year);
		
	}
	else
	{
		printf("%d is not a leap year",year);
		
	}
}
