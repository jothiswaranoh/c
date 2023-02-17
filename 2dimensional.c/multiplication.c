#include<stdio.h>



int main() 
{
  int row1, column1,row,column ,a[50][50], b[50][50], sum[50][50], i, j;
  printf("number  of rows: ");
  scanf("%d", &row1);
  printf(" number of columns: ");
  scanf("%d", &column1);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < row1; ++i)
    for (j = 0; j < column1; ++j) {
      printf(" a%d%d: ", i+1 , j+1 );
      scanf("%d", &a[i][j]);
    }
 printf("number  of rows: ");
  scanf("%d", &row);
  printf(" number of columns: ");
  scanf("%d", &column);
  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < row; ++i)
  {
    printf("\n\n");
    for (j = 0; j < column; ++j) {
      printf(" b%d%d: ",i+1 ,j+1 );
      scanf("%d", &b[i][j]);
    } 
  }
    if(column1==row)
    {
    printf("\nMultiplication of two matrices: \n");
  for (i = 0; i < row1; ++i)
  {
  printf("\n\n");
    for (j = 0; j < column; ++j)
     {
      sum[i][j] = a[i][j] *b[i][j];
     printf("%d   ", sum[i][j]);
 
    }
  }
    }
    else
    {
      printf("error");
    }
return 0;
}