#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,sum=0;
   scanf("%d %d",&a,&b);
   if(a>=b)
   {
   d=(a%100)%10+(b%100)%10;
    e=(a%100)/10+(b%100)/10;
     f=(a/100)+(b/100);
    
   }
   else
   {
   d=(b%100)%10+(a%100)%10;
    e=(b%100)/10+(a%100)/10;
     f=(b/100)+(a/100);
   }
sum=(d/10);
if(sum>=0)
{
    sum=sum+((d/10+e)/10);
     sum=sum+(((d/10+e)/10 +f)/10);
}
printf("%d",sum);
    return 0;
}