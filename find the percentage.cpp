 // 8.  Write a program to calculate sum of 5 subjects & find the percentage. Subject
//  marks entered by user.
#include<stdio.h>
main()
{
	int s1,s2,s3,s4,s5,sum,totel=500;
	float percentage;
	printf("Enter your marks of 5 subjects\n");
	scanf("%i%i%i%i%i",&s1,&s2,&s3,&s4,&s5);
	sum= s1+s2+s3+s4+s5;
	printf("sum=%i",sum);
	percentage=sum*100/totel;
	printf("percentage=%f",percentage);
}
