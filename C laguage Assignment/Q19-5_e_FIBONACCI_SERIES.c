#include<stdio.h>
main()
{
	int num,a=0,b=1,fib,i;
	printf("Enter Number :- ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d ",a);
		fib=a+b;
		a=b;
		b=fib;
	}
}
