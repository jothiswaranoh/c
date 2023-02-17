#include <stdio.h>
int main()
{
    int a[20];
    int i,j,n;
  printf("enter the count of element");
  scanf("%d",&n);
  printf("enter the elements");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }

    for(i=0;i<n;i++)
    {
    int count=0;
    for(j=i;j<n;j++)
    {
    if(a[i]>a[j])
    {
        count++;
    }
   
    }
     printf("%d ",count);
    }
}