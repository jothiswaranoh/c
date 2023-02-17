#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	 int a;
   
      printf("enter the mark:");
      scanf("%d",&a);
    if(a<=100){
        if(a<=35)
        {
            printf("fail");

        }
        else{
            printf("pass");
        }

    }
    else{
        printf("enter the number between 100");
    }
}