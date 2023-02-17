#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c,ch;
    printf("enter a value:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    printf("enter ur choice:\n1.add\n2.sub\n3.mul\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :c=a+b;
        printf("sum of a+b:%d",c);
        break;
        case 2 :c=a-b;
        printf("sub of a-b:%d",c);
        break;
        case 3 :c=a*b;
        printf("multiplication of a*b=%d",c);
        break;
        default:
            printf("choose 1-3");
    }

    return 0;
}