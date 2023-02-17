#include<stdio.h>
int main()
{
    int a=5,b=5;
    char operation;
    printf("Enter any operation(+,-,*,/)");
    scanf("%c",&operation);
    switch(operation)
    {
        case '+' :
        printf("add is %d\n",a+b);
        break;
        case '-':
        printf("sub is %d\n" ,a-b);
        break;
        case '*':
        printf("multi is %d\n ",a*b);
        break;
        case '/':
        printf("div is %d\n",a/b);
        break;
        default:
        printf("*******");
    }
    return 0;
}