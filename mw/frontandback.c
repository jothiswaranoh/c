

#include<stdio.h>
void count1(int arr[],int n)
{
    for(int i=0;i<n-1;)
    {
if(arr[i]<arr[i+1])
{
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
else
{
     int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}
i=i+2;

    }
    for(int i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }

}
int main()
{
  
    int n=7;
    int arr[]={4,3,7,8,6,2,1};

    count1(arr,n);


    
   
    return 0;
}

