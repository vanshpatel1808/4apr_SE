#include<stdio.h>
main()
{
	int a[5];
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		printf("Enter Number :- ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
	}
	printf("Array elements :- ");
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
}
