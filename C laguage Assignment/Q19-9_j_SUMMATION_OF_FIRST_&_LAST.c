#include<stdio.h>
main()
{
	int a,total=0,b;
	printf("Enter Value :- ");
	scanf("%d",&a);
	b=a%10;
	while(a>9)
	{
		a=a/10;
		
	}
	total=a+b;
	printf("Sum of First and Last digit entered :- %d ",total);
}
