#include<stdio.h>
int main()
{
int a[20],i,n,sum=0;
printf("enter the arrary size:");
scanf("%d",&n);
printf("enter the arrary number:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("the total sum is :%d",sum);
return 0;
}
