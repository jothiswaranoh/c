#include <stdio.h>
int main()
{

   int a[20];
    int i,j,t,n;
      printf("enter the count of element");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=1;i<=n;i++)
  {
  scanf("%d",&a[i]);
  }

for(int k=1;k<=n;k++)
{
  if(a[n%2==0])
  {
   
 for (int i=1;i<=n;i++)
{
    for(int j=1;j<=t;j++)
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
  }
  else
  {
   
 for (int i=1;i<=n;i++)
{
    for(int j=1;j<=t;j++)
{
    if(a[i]>a[j+2])
    {
        int temp;
        temp=a[j+2];
        a[i]=a[j+2];
        a[j]=temp;
       
    }

  }
}
  }
}
for(i=0;i<n;i++)
{
    printf(" %d ",a[i]);
}

   
}