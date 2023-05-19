#include<stdio.h>
#include<stdlib.h>

int powwer(int n,int x)
{
    return n*x;
}
int main()
{
    int n=3,m=4,k=2;
 int x=1;
 while (m--)
 {

       x=powwer(n,x);
 }
    while (k-->1)
    {
   x=x/10;
    }
    
 
    printf("%d",x);
}