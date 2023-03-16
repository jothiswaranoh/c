#include<stdio.h>
int main()
{
    int a;
    int n;
    int d;
    int sum=0;
    scanf("%d",&n);
   while(n--)
   {
    scanf("%d",&a);
    d=a/3;
    d=d-2;
    //printf("%d",d);
sum+=d;
   }
     printf("%d",sum);

}