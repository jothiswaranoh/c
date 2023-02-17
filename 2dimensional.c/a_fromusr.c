#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	 int a[3][3];
     int i,j,l,k;
     printf("enter the number of rows:" );
     scanf("%d",&l);
      printf("\nenter the number of column:" );
     scanf("%d",&k);
     for(i=0;i<l;i++)  
     {


        for (j=0;j<k;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }
printf("the elementes are:\n");
     for (i=0;i<l;i++) 
     {
        for (j=0;j<k;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
     }

     return 0;
}