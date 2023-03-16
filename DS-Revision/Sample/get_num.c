#include <stdio.h>
#include <math.h>
#include<stdlib.h>
void main()
{
    double n = 9999999991;
    printf("%lf\n",n);
    int num = 123;
    double num2 = 0;
    int p = 0;
    while (num != 0)
    {
        
        num2 = num2 + ((double)(num % 10) * (pow((double)10, (double)p)));
        p++;
        num /= (double)10;
    }
    printf("<< %d", (int)num2);
}