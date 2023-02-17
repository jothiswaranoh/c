#include<stdio.h>



int main() 
{
  int row,column ,a[50][50],i,j,rstart=0,rend,cstart=0,cend;
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
  rend=row;
  cend=column;


    
    i=0;
     for(int j=0;j<cend;j++)
    {
        printf(" %d",a[i][j]);
    }
    for(int i=1;i<rend;i++)
    {
        j=cend-1;
        printf(" %d",a[i][j]);
    }
    for(int j=cend-2;j>=0;j--)
    {
       i=rend-1;
        printf(" %d",a[i][j]);
    }
     for(int j=0;j<cend-1;j++)
    {
        if(j==0)
        {
            for(int i=rend-2;i>0;i--)
            {
            printf(" %d",a[i][j]);
            }
        }
        if(j==1){
             i=1;
             for(int j=cend-3;j<3;j++)
            {
            printf(" %d",a[i][j]);
            }
             i=2;
             for(int j=cend-2;j>0;j--)
            {
            printf(" %d",a[i][j]);
            }
        }
        
    }
    
  
 


 return 0;
}
