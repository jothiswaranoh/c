#include <stdio.h>
int main(){
    int n;
    char a[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d",&n);
    if(n<=9)
    {
        printf("%s\n",a[n]);
    }
    else
    {
        printf("greater than nine");
    }
    return 0;
}