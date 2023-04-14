#include <stdio.h>
#include<string.h>
   char new[100];
int check(int j)
{
    int ct=1;
    // if(new[j-1]==new[j+1])
    // {
    //     ct++;
    //     check(j+1);
    // }
    return ct;

}
int main()
{
    int j=0,count=0;
    char og[]="abaabc";
    int m=2*strlen(og);
    int arr[100];
 
    for(int i=0;i<(strlen(og));i++)
    {
new[j]='#';
new[j+1]=og[i];
j=j+2;
arr[i]=0;
// printf("\n%d value of i",i);

arr[m]=0;
// printf("\n%d value of i",m);

m=m-1;
}
// printf("\n%d value of i",m);
arr[m]=0;
//print the array
// for(int i=0;i<=12;i++)
// {
//     printf("%d",arr[i]);
//    // count++;
// }
    
    int c=0;
   // printf("%d",count);
   int check=new[0];
     for(int i=0;i<(strlen(new));i++)
     {
     
         
                check(i);
    
    
     }
     for(int i=0;i<=12;i++)
{
    printf("%d",arr[i]);
   // count++;
}
return 0;

}