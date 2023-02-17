#include <stdio.h>

int main() {
int a,b,c,t;
scanf("%d",&t);
while(t--){
scanf("%d%d%d",&a,&b,&c);
if ((a>b)&&(a>c))
printf("\n%d",a);
else if(b>c)
printf("\n%d",b);
else
printf("\n%d",c);


}
return 0;
}