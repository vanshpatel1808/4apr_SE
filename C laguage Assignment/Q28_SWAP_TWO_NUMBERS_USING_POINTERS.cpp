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
	printf("before swap a=%d and b=%d",a,b);
	printf("\nAfter swap a=%d and b=%d",*q,*p);
}
