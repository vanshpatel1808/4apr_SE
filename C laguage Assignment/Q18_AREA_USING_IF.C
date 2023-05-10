#include<stdio.h>
main()
{
	float a,circle,pi=3.14,r,l,b,rectangle,h,c,triangle;
	printf("----------------MENU----------------");
	printf("\n1.Area of circle");
	printf("\n2.Area of rectangle");
	printf("\n3.Area of traingle");
    
	printf("\nEnter your choice :- ");
	scanf("%f",&a);
	
	if(a==1)
	{
		printf("Enter radius of circle :- ");
		scanf("%f",&r);
		circle=pi*r*r;
		printf("Area of circle = %f",circle);
		
	}	
	else if(a==2)
	{
		printf("Enter the length of the rectangle :- ");
		scanf("%f",&l);
	    printf("Enter the breadth of the rectangle :- ");
		scanf("%f",&b);
		rectangle=l*b;
		printf("Area of rectangle = %f",rectangle);
	}
	else if(a==3)
	{
		printf("Enter the height of the triangle :- ");
		scanf("%f",&h);
		printf("Enter the base of the triangle :- ");
		scanf("%f",&c);
		triangle=h*c/2;
		printf("Area of triangle = %f",triangle);
	}
	else
	{
		printf("\nInvalid choice");
	}
   
}
