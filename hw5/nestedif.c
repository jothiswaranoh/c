#include<stdio.h>
int main()
{ int mark1;
printf("enter the mark:");
scanf("%d",&mark1);
if(mark1>100)
{
printf("enter the mark between 1 to 100");
}
else
{
if(mark1>35)
{
    printf("you are pass");
}
else
{
    printf("you are failed");
}
}
return 0;
}