#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	 int a[10][10],b[10][10],c[10][10];
     int i,j,l,k,m,n;
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
      printf("enter the number of rows:" );
     scanf("%d",&m);
      printf("\nenter the number of column:" );
     scanf("%d",&n);
     for(i=0;i<m;i++)  
     {


        for (j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
  
     }

     for(i=0;i<l;i++)  
     {


        for (j=0;j<k;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
  
     }
     printf("the elementes are:\n");
     for (i=0;i<l;i++) 
     {
        for (j=0;j<k;j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
     }


     return 0;
}