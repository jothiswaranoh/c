#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, a[1000], i;
    scanf("%d", &num);

   
    for(i=0;i<num;i++)
    scanf("%d",&a[i]);
    for(i=3;i<=num;i--)
    {
        printf(" %d",a[i-1]);
    }
}

    