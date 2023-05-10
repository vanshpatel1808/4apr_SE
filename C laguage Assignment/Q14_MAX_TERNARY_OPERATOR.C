#include<stdio.h>
main()
{
	int a,b,c,max;
	printf("Enter the value :- ");
	scanf("%d",&a);
	printf("Enter the value :- ");
	scanf("%d",&b);
	printf("Enter the value :- ");
	scanf("%d",&c);
	max = (a>b && a>c) ? (a) : ((b>c) ? (b) : (c));
	printf("%d is max",max);
}
