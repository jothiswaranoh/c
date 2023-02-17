#include<stdio.h>
int main()
{
    int a[10],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)

        {   
             
            printf("%d",a[j]);
           
        }
        for(int k=n;k>i;k--)
        {
        printf("  ");
        }
        
         for(int j=0;j<=i;j++)

        {   
             
            printf("%d",a[j]);
            
        }
        

        printf("\n");
    }
     for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d",a[j]);
        }
         for(int k=n;k>=i;k--)
        {
        printf("  ");
        }
        for(int j=0;j<i;j++)
        {
            printf("%d",a[j]);
        }

        printf("\n");
    }
    return 0;
}