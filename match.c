#include<stdio.h>
#include<string.h>
int main()
{

    int d,b,c,t,m,n,o,p,q;
   int a[10]={6,2,5,5,4,5,6,3,7,6};
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&d,&b);
        c=d+b;
      
        m=c%10;
        n=(c/10)%10;
        o=(c/100)%10;
        p=(c/1000)%10;
        q=(c/10000)%10;
        //printf("%d",p);
        if(m!=0&&n!=0&&o!=0&&p!=0&&q!=0)
        {
        printf("\n%d",a[m]+a[n]+a[o]+a[p]+a[q]);  
        break;
        }
        if(m!=0&&n!=0&&o!=0&&p!=0)
        {
        printf("\n%d",a[m]+a[n]+a[o]+a[p]);  
        break;
        }
        if(m!=0&&n!=0&&o!=0)
        {
        printf("\n%d",a[m]+a[n]+a[o]);  
        break;
        }
        if(m!=0&&n!=0)
        {
        printf("\n%d",a[m]+a[n]);  
        break;
        }
        if(m!=0)
        {
        printf("\n%d",a[m]); 
        break; 
        }
    }

    return 0;
}