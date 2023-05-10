#include<stdio.h>
main()
{
	int a,total=0,b;
	printf("Enter Value :- ");
	scanf("%d",&a);
	
	while(a>0)
	{
		b=a%10;
		total+=b;
		a=a/10;
	}
	
	printf("Sum of digits entered :- %d ",total);
}
