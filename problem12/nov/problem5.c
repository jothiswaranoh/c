#include<stdio.h>

int main()
{
    int a,b,d,i,x=1;
   scanf("%d %d",&a,&b);
   if(a==11)
   {
    x=11;
   }
   else if(a>11)
   {
   d=a/11;
  
   x=11*d;

   }
   else{
    x=11;
   }
    
   for(i=x;i<b;)
   {
    printf(" %d,",i);
    i=i+11;
   }

return 0;
}