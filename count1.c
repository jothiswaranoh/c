#include<stdio.h>
int count(int n)
{
    int j;
    int count=0;
while(n>0)
{



if(n/10==1)

{   count++;
    if(n%10==1)
    {
        // printf("%d",n);
 
    count++;
    }
}
if(n==1)
{
    count++;
}
n--;
}

return count;
}
int main()
{
    int n;

//scanf("%d",&n);
n=13;
int m=count(n);
printf("\n%d",m);
}