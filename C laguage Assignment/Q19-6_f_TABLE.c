#include<stdio.h>
main()
{
	int i,a;
	printf("Enter a Number :- ");
	scanf("%d",&a);
	i=1;
	while(i<=10)
	{
		printf("\n%d * %d = %d",a,i,i*a);
		i++;
		
	}
}
