#include <stdio.h>
int main()
{

   int a[20];
    int i,j,t,n;
      printf("enter the count of element");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
    t=n/2;
 for (int i=0;i<n;i++)
{
    for(int j=0;j<t;j++)
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

   
}