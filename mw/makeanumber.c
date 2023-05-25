#include<stdio.h>
int main()
{
    int n=3;
    // int n=3;
    if(n%2==0)
    {
        int k=n/2;
        for(int i=1;i<k;i++)
        {
            printf("%d %d ",i,i*-1);
        }
         printf(" %d %d ",0,n);
    }
   if(n%2!=0)
    {
        int k=n%2;
      for(int i=1;i<=k;i++)
        {
            printf("%d %d",i,i*-1);
        }
              printf(" %d",n);
    }
}