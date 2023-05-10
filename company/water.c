#include <stdio.h>
#include <string.h>

char new[100];
int minim(int i,int j)
{
    if(i>j)
    {
        return j;
    }
    else
    {
        return i;
    }

}

int main()
{
    int arr[6]={2,1,3,4,5,6};
    //n->build
    // remove n-2
    int n=6;
  //  scanf("%d",&n);
    int r=n-2;
    int min=0,count=0,x;
    int k,ans,max=0;
    // for(int i=0;i<n;i++)
    // {
    //    scanf("%d",&arr[i]);
    // }
        for(int i=0;i<n;i++)
    {
        count=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]>=arr[i])
        {
  k=arr[j]-arr[i];
        }
        else
        {
          k=arr[i]-arr[j];  
        }
      if(k>2)
     {
            x=1;
   }
   else
   {
        x=0;
   break;
   }

  count=count+x;

   min=minim(arr[i],arr[j]);
    
    printf("\ncount->%d min->%d",count,min);
   ans=count*min;
     printf("\ncount->%d min->%d answer->%d",count,min,ans);
    }
if(max<ans)
{
    max=ans;
}
    
    

    }
        printf("%d",max);
    return 0;
}