#include <stdio.h>

int main() {
int a,b,t;
scanf("%d",&t);
while(t--){
scanf("%d%d",&a,&b);
if (a<b)
{
printf(" \nFIRST");}
else if(a==b)
{
printf("\nANY");}
else 
{
printf("\nSECOND");
}
    
}
return 0;
}

