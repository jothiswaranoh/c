#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define a 25
#define b 10

int main()
{
	 int a1,b1,c,e,f,j;
     float d;
      
   

    c=a+b;
    printf("\nthe sum of the values are :%d",c);
        
    e=a-b;
    printf("\nthe subtract of the values are :%d",e);
        
  f=a*b;
    printf("\nthe multiplication of the values are :%d",f);
        
   d=(float)a/(float)b;
    printf("\nthe division of the values are :%.1f",d);
    j=a%b;
    printf("\nthe modules of the values are :%d",j);
   
 return 0;
}