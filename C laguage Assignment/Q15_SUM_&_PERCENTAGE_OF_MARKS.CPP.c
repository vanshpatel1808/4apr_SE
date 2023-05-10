#include<stdio.h>
main()
{
	float a,b,c,d,e,f,Total,per;
	printf("Enter the marks obtained in Physics :- ");
	scanf("%f",&a);
	printf("Enter the marks obtained in Chemistry :- ");
	scanf("%f",&b);
	printf("Enter the marks obtained in Maths :- ");
	scanf("%f",&c);
	printf("Enter the marks obtained in Computer :- ");
	scanf("%f",&d);
	printf("Enter the marks obtained in Hindi :- ");
	scanf("%f",&e);
	printf("Enter the marks obtained in English :- ");
	scanf("%f",&f);
	Total=a+b+c+d+e+f;
	per=Total/600*100;
	if (per>75)
	{
		printf("%f Distinction",per);
	}
	else if (per>60 && per<=75)
	{
		printf("%f First Class",per);
	}
	else if (per>50 && per<=60)
	{
		printf("%f Second Class",per);
	}
	else if (per>35 && per<=50)
	{
		printf("%f PASS",per);
	}
	
	else
	{
		printf("FAIL");
	}
	
}
