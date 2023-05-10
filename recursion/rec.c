#include <stdio.h>
int sum=0;
   int a[20];
int main()
{


    int i,j,n;

  scanf("%d",&n);
  fib(n);
  print1(n);
}
int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        sum=fib(n-1)+fib(n-2);
        a[n]=sum;
    }
}
void print1(int n)
{

for(int i=0;i<n;i++)
{
    printf(" %d ",a[i]);
}
}

   
