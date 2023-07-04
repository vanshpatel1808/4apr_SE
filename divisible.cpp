#include<stdio.h>
main()
{
	int num;
	printf("enter a num");
	scanf("%d",&num);
    if(num%5==0 && num%11==0)
    {
    	printf("number is divisible by 5 and 11");
	}
	else
	{
		printf("it is not divisible");
	}
}

