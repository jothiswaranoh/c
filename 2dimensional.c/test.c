#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	 int a[3][3];
     int i,j,l;
  
     scanf("%d",&l);
      
     for(i=0;i<l;i++)  
     {


        for (j=0;j<l;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
   
     for (j=0;j<l;j++)
     {
        for(i=0;i<l;i++)  
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
     }

     return 0;
}