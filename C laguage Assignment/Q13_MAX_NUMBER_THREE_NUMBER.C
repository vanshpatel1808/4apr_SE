#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value :- ");
	scanf("%d",&a);
	printf("Enter the value :- ");
	scanf("%d",&b);
	printf("Enter the value :- ");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("%d is greater from %d and %d",a,b,c);
	}
	else if (b>a && b>c)
	{
		printf("%d is greater from %d and %d",b,a,c);
	}
	else
	{
		printf("%d is greater from %d and %d",c,a,b);
	}
}
