#include <stdio.h>

int countDigitOne(int n) {
    int count = 0;
    int factor = 1;
    while (factor <= n) 
    {
        int high = n / (factor * 10);
        int low = n % factor;
        int curr = (n / factor) % 10;
            printf("\n");
            printf("curr->%d high->%d low->%d",curr,high,low);

        if (curr == 0)
         {
            count += high * factor;
            printf("       0->%d ",high*factor);
        } else if (curr == 1)
         {
            count += high * factor + low + 1;
                    printf("1->%d ",high*factor+low+1);
        } else {
            count += (high + 1) * factor;
            printf("       2->%d ",(high+1)*factor);

        }
        factor *= 10;
    }
    return count;
}

int main() {
    int n = 13;
    printf("%d\n", countDigitOne(n)); // Output: 6
    
  
    
    return 0;
}
