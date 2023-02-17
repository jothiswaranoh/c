#include <stdio.h>



/*
int main() 
{
    int num , digit = 0;
    scanf("%d",&num);
do {
    digit = num / 10;          
    if (digit % 2 != 0)        
        printf("%d", digit);  
    num = num%10;                  
} while (num > 0); 
}*/

int main()
{
     long int num;
     int rem, digit = 0;
    scanf("%ld",&num);
    while(num!=0)
    {
        rem=num%10;
        digit=digit*10+rem;
        num=num/10;
    }
    for(;digit>0;digit=digit/100)
    {
        rem=digit%10;
    printf("%d",rem);
    }

return 0;
}