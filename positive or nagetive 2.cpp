#include<stdio.h>
main()
{
	int a;
	printf("enter your num");
	scanf("%d",&a);
	if(a>0)
	{
		printf("number is positive");
	}
	else if(a<0)
	{
		printf("number is nagetive");
	}
	else if(a==0)
	{
		printf("number is zero");
	}
}
