#include<stdio.h>
int main()
{
    int a[6]={1721,979,366,299,675,1456};
    int sum=0,count=0;
    for(int i=0;i<6;i++)
    {
      for(int j=0;j<6;j++)
      {
        if(a[i]+a[j]==2020)
        {
            count++;
            if(count==2)
            {
            sum=a[i]*a[j];
            printf("%d\n",sum);
            }
           
        }
      }
    }
    
}