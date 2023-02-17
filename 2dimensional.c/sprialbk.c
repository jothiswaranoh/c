#include<stdio.h>



int main() 
{
  int row,column ,a[50][50],i,j,rstart=0,rend=3,cstart=0,cend=3;
  printf("number  of rows: ");
  scanf("%d", &row);
  printf(" number of columns: ");
  scanf("%d", &column);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < row; ++i)
  {
    for (j = 0; j < column; ++j) 
    {
      printf(" a%d%d: ", i+1 , j+1 );
      scanf("%d", &a[i][j]);
    }
  }


    
    i=0;
     for(int j=0;j<cend;j++)
    {
        printf("%d",a[i][j]);
    }
    for(int i=1;i<rend;i++)
    {
        j=cend-1;
        printf("%d",a[i][j]);
    }
    for(int j=1;j>=0;j--)
    {
       i=rend-1;
        printf("%d",a[i][j]);
    }
     for(int j=0;j<2;j++)
    {
        i=1;
        printf("%d",a[i][j]);
    }
    
  
 


 return 0;
}
