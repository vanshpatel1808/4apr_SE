#include<stdio.h>
main()
{
	int n[5],i,j,m;
	for(i=0;i<5;i++)
	{
		printf("Enter the number :- ");
		scanf("%d",&n[i]);
	}
	    if (n[0]<n[1])
		{
	        j=n[0];
	        m=n[1];
	    }
	    else
		{
	    	j=n[1];
	    	m=n[0];
		}
    for (i = 2; i < 5; i++)
	{
        if (n[i]<j)
		{
        	m=j;
        	j=n[i];
        }
        else if(n[i]<m)
		{
            m=n[i];
        }
    }
    printf("\nSecond smallest element is :- %d",m);
}
