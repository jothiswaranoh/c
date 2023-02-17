#include<stdio.h>

int main()
{
    int a,b,d,i,sum=0,sum2=0,j;
   scanf("%d %d",&a,&b);
   for(int i=0;i<=b;i++)
   {
 
    if((i%a)!=0)
    {
   sum=sum+i;
   
    }
    if((i%a)==0)
    {
        sum2=sum2+i;
    }

   }
   if(sum>=sum2)
   {
    j=sum-sum2;
   }
   else{
    j=sum2-sum;
   }
   printf("%d",j);
  
return 0;
}