#include <stdio.h>
int main(){
    int n;
    int num=0;
    scanf("%d",&n);
    while(n>0){
        num=num+n%10;
        n=n/10;
    }
    printf("%d",num);
    return 0;
}