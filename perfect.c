#include<stdio.h>
#include <math.h>

// Input: n = 12
// Output: 3
// Explanation: 12 = 4 + 4 + 4.
// Example 2:
// Input: n = 13
// Output: 2
// Explanation: 13 = 4 + 9.
int count(int n) 
{
    int sum=0;
    int j=1;
    int x=0;
    int y=1;
    int arr[100];
    while(y!=0)
    {
        if(j*j<n)
        {
            arr[x]=j*j;
     

            x++;
        }
      else{
        y=0;
        break;
      }
      j++;
    }
    for(int i=0;i<x;i++)
    {
        printf("%d ",arr[i]);

    }
    while(ch!=0)
    {
        x=arr[0];
        if(x+y+z==n)
        {
            break;
        }

    }
return 0;
}
int main()
{
    int n;

//scanf("%d",&n);
n=13;
int m=count(n);
printf("\n%d",m);
}