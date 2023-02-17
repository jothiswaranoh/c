#include<stdio.h>
int main()
{ int mark1;
printf("enter the mark:");
scanf("%d",&mark1);
if((mark1>=95)&&(mark1<=100))
{
printf("GOLD MEDALIST");
}
else if((mark1<=95)&&(mark1>=90))
{
    printf("SILVER MEDALIST");
}
else if((mark1<=90)&&(mark1>=85))
{
    printf("BRONZE MEDALIST");
}
else
{
    printf("AVERAGE");
}
return 0;
}