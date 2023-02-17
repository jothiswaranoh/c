#include<stdio.h>
#include<string.h>

int main()
{

int a[100],i,j,n;
printf("enter the number of element");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
   
}
for (int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
{
    if(a[i]<a[j])
    {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
       
    }
    
}
}
for(i=0;i<n;i++)
{
    printf(" %d ",a[i]);
}
return 0;
}
