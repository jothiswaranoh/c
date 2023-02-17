#include<stdio.h>

int main()
{
    int a[8]={3,4,-7,1,3,3,1,-4};
    int t=7;
     for(int k=0;k<7;k++)
    {
    for(int i=0;i<7;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(a[i]+a[j]+a[k]==7)
            {
            if(a[i]!=a[j])
            {
                printf("\n{ %d ,%d,%d }",a[i],a[j],a[k]);
            }
            }
            if(a[i]+a[j]==7)
            {
               printf("\n{ %d ,%d }",a[i],a[j]); 
            }
           
        }
    }
    }

}