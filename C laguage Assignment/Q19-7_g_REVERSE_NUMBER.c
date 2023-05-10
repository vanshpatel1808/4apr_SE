#include<stdio.h>
main()
{
	int num,a;
	printf("Enter Number :- ");
	scanf("%d",&num);
	
	while(num>0)
	{
		a=num%10;
		printf("%d",a);
		num=num/10;
	}
}
