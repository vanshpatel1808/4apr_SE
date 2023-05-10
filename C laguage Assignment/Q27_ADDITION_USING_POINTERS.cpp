#include <stdio.h>
main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	printf("Enter Number :- ");
	scanf("%d",&a);
	printf("Enter Number :- ");
	scanf("%d",&b);
	printf("Addition = %d",*p+*q);
	
}
