#include <stdio.h>
int main(){
    int a,b,c;
    float d;
    printf("enter the value 1");
    scanf("%d",&a);
    printf("enter the value 2");
    scanf("%d",&b);
    c=a+b;
    printf("the sum of the values are%d\n",c);
    c=a-b;
    printf("the product of the value is%d\n",c);
    c=a*b;
    printf("the multiplied value is%d\n",c);
    d=a/b;
    printf("the division is%.2f\n",d);
    return 0;

}