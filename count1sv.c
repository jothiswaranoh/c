#include<stdio.h>

int main()

{
    int n=21;
int count=0;
for(int i=1;i<=n;i++)
{
    int m=i;
while(m!=0)
{
    int val=m%10;
    if(val==1)
    {
        count++;
    }
    m=m/10;
}
}
printf("%d",count);
}