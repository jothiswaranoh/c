#include<stdio.h>
int main()
{
    char arr[100];
    int z=90;
    int n;
    
    scanf("%d",&n);

    int m=n;
    while (n>=1)
    {
        /* code */
        arr[n-1]=(char)z;
        n--;
        z--;
    }
    // for(int i=0;i<m;i++)
    // {
    //     printf("%c",arr[i]);
    // }
    printf("%c",arr[0]);
    for(int i=1;i<m;i++)
    {
        
        printf("\n");
        for(int j=1;j<=i;j++)
        {
            printf("%c",arr[i]);
        }
        printf("%c",arr[i-1]);
    }
    
    return 0;
}