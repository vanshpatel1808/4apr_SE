#include<stdio.h>
int fact(int x)
{
	if (x>1)
	{
      return x * fact(x-1);
	}
}
main()
{
	int a;
	printf("Enter a number to find factorial :- ");
	scanf("%d",&a);
	printf("%d",fact(a));

}
