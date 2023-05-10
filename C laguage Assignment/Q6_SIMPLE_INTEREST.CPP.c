#include<stdio.h>
main()
{
	int p,r,n,s,t;
	printf("Enter principal amount :- ");
	scanf("%d",&p);
	printf("Enter rate of interest :- ");
	scanf("%d",&r);
	printf("Enter duration in years :- ");
	scanf("%d",&n);
	s=p*r*n/100;
	printf("The simple intrest is :- %d",s);
	t=p+s;
	printf("\nYour total amount after given time is :- %d",t);
}
