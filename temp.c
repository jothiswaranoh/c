#include<stdio.h>
void sum();
int sub();

int  main()
{
    int a,b;
    printf("enter value for a ");
    scanf("%d",&a);
    printf("enter value for b ");
    scanf("%d",&b);
    sum(a,b);
    sub(a,b);
    return 0;

}

    void sum(int a,int b)
    {
        printf("sum value is %d",a+b);
    }
    int sub(int a,int b)
    {
        printf("subraction value is %d",a-b);
        return 0;
    }
