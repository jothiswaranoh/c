#include <stdio.h>

int main() {
int a,b,c,t;
scanf("%d",&t);
while(t--){
scanf("%d%d%d",&a,&b,&c);
c = c+a;
if (b<c)
printf("NO");
else 
printf("YES");



}
return 0;
}