#include<stdio.h>
int main()
{
int n=5;


    /* code */

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        if(((i==0)||(j==0))||((i==n-1)||(j)==n-1))
        {
  printf("*");
        }
        else
        {
              printf("%d",i+j);
        }
    }
    printf("\n");
}



    

    //    int sum = t1 + t2;
    //         t1 = t2;
    //         t2 = sum;/
    // -----

    //
    //
    //
    //

}