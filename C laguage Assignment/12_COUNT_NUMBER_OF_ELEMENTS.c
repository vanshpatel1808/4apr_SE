#include<stdio.h>
main()
{
	int elements[10];
	int i,even,evencount=0,oddcount=0;
	
	for(i=0;i<10;i++)
	{
			printf("Enter the number :- ");
			scanf("%d",&elements[i]);
	}
	for(i=0;i<10;i++)
	{
		if(elements[i]%2==0)
		{
			printf("\n%d is even Numbers",elements[i]);
			evencount++;
		}
		else
		{
			printf("\n%d is odd Numbers",elements[i]);
			oddcount++;
		}
    	}
	printf("\n total even= %d",evencount);
	printf("\n total odd= %d",oddcount);
}

