#include<stdio.h>

int main() {
   int arr[30], element, num, i, location;

   printf("\nEnter no of elements :");
   scanf("%d", &num);

   for (i = 0; i < num; i++) {
      scanf("%d", &arr[i]);
   }

   printf("\nEnter the element to be inserted :");
   scanf("%d", &element);

   printf("\nEnter the location");
   scanf("%d", &location);

   
   for (i = num; i >= location; i--) {
      arr[i] = arr[i - 1];
   }

   num++;
   arr[location - 1] = element;

  
   for (i = 0; i < num; i++)
      printf("%d\n", arr[i]);

   return (0);
}