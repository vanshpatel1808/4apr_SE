#include<stdio.h>
main()
{
	int a;
	printf("Enter a Number :- ");
	scanf("%d",&a);
	switch(a>0)
	{
		case 1:
			printf("%d is a Positive Number",a);
			break;
		case 0:
			switch(a<0)
			{
				case 1:
					printf("%d is a negative number",a);
					break;
				case 0:
				    printf("%d is Zero",a);
					break;
						
			}
			break;
		default:
			printf("Invalid Input");
		    
	}
}
