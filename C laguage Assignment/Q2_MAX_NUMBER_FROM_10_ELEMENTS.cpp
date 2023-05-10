#include<stdio.h>
main()
{
	int Number[10];
	int i,max;
	for(i=0;i<10;i++)
	{
	printf("Enter Number :- ",i+1);
	scanf("%d",&Number[i]);
    }
    for(i=0;i<10;i++)
    {
    	printf("\n %d",Number[i]);
    	if(Number[i]>max)
    	{
    		max=Number[i];
		}
	}
		printf("\nMaximum number from given element is %d",max);
}
