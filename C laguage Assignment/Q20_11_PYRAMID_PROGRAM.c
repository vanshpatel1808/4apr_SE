#include <stdio.h>
main()
{
  int i,j;
  for(i=1;i<=4;i++)
  {
  	 for(j=5;j>i;j--)
    {
          printf(" ");
    }
    for(j=i;j>=1;j--)
    {
      printf(" %d",j%2);
    }
    printf("\n");
  }
  
}
