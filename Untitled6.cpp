#include<stdio.h>
main()
{
   int x=5;
 //
  printf("%d",x>3 && x<10);//logical AND
   
  printf("%d",x>7 || x<10);//logical OR
  
  printf("%d",!(x>3 && x<10));//logical NOT
}
