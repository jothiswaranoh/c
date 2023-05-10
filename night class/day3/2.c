// Activity Selection Problem: Given a set of activities, along with 
//the starting and finishing time of each activity, find the maximum number
// of activities performed by a single person assuming that a person can only work 
//on a single activity at a time.

// For example,

// Input: Following set of activities
 
// (1, 4), (3, 5), (0, 6), (5, 7), (3, 8), (5, 9), (6, 10), (8, 11), (8, 12), (2, 13), (12, 14)
 
// Output:
 
// (1, 4), (5, 7), (8, 11), (12, 14)


#include<stdio.h>
int arr[100][2],brr[100][2];
int max=0,p=0,count=0;
void printjs(int brr[][2])
 {
printf("the values area");
for (int i=0; i<count; i++) 
{
printf("%d %d\n",brr[i][0],brr[i][1]);
}
}

void print1(int n, int arr[][2])
 {
printf(" \nthe values area : \n");
for (int i=0; i<n; i++) 
{
printf("%d %d\n",arr[i][0],arr[i][1]);
}
}

void get(int n, int arr[][2])
 {
printf("Enter time : ");
for (int i=0; i<n; i++) 
{
scanf("%d %d", &arr[i][0], &arr[i][1]);
}
}

void check(int x,int y)
{
    printf("\n%d %d",x,y);
    printf("\n%d",max);
    if(max<x)
    {
      
           max=x;
        if(max<=y)
        {
              
        max=y;
        brr[p][0]=x;
        brr[p][1]=y;
           //printf("\np->%d",p);
        p++;
        count++;
       
        }
    }


}
int main()
{
    int n;
    scanf("%d",&n);
   int arr[][2]={
    {1,4},
   {2,3}
   };
   get(n,arr);
   for(int i=0;i<n;i++)
   {
   check(arr[i][0],arr[i][1]);
   }
    printjs(brr);
    return 0;
}
