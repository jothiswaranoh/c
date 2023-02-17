#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arr[9][9]={     1,2,3,4,5,6,7,8,9,
                    4,5,6,7,8,9,1,2,3,
                    7,8,9,1,2,3,4,5,6,
                    2,3,4,5,6,7,8,9,1,
                    5,6,7,8,9,1,2,3,4,
                    8,9,1,2,3,4,5,6,7,
                    3,4,5,6,7,8,9,1,2,
                    6,7,8,9,1,2,3,4,5,
                    9,1,2,3,4,5,6,7,8
                    };
                  



` 
int row = 0;
int col = 0;
int check_row(int row)
{
    int z[10] = {0};
    for(int i = 0;i < 9;i++)
    {
        z[arr[row][i]]++;
    }
    for(int i = 1;i < 10;i++)
    {
        if(z[i] != 1)
            return 0;
    }
    return 1;
}
int check_col(int col)
{
    int z[10] = {0};
    for(int i = 0;i < 9;i++)
    {
        z[arr[i][col]]++;
    }
    for(int i = 1;i < 10;i++)
    {
        if(z[i] != 1)
            return 0;
    }
    return 1;
}

int check_cube(int cube)
{ int l,j,k;
    for(k = i;k < i+3;k++)
            {
                for(l = j;l < j+3;l++)
                {
                    
                }
            }
}
int main()
{ int l;
    // check all rows
    for(int i = 0;i < 9;i++)
    {
        row = check_row(i);
        if(row == 0)
        {
            break;
        }
    }
    printf("%d\n",row);
    
    // check all columns
    for(int i = 0;i < 9;i++)
    {
        col = check_row(i);
        if(col == 0)
        {
            break;
        }
    }
    printf("%d\n",col);
    
   
}