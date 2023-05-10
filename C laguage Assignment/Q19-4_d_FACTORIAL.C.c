#include<stdio.h>
main()
{
	int  a,f,i;                 
	printf("Enter your number :- ");
	scanf("%d",&a);
	f=1;                           
	for(i=1;i<=a;i++)
	{
		f=f*i;
		
	}
		printf("Factorial %d",f);

	
}








