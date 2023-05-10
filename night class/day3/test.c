#include<stdio.h>
void print(int n, int arr[][2]) {
printf("Selected activities: ");
for (int i = 0; i < n; i++) {
printf("(%d, %d) ", arr[i][0], arr[i][1]);
}
printf("\n");
}

void get(int n, int arr[][2])
 {
printf("Enter the starting and finishing time of each activity:\n");
for (int i = 0; i < n; i++) 
{
scanf("%d %d", &arr[i][0], &arr[i][1]);
}
}

void check(int n, int arr[][2], int selected[][2], int count) 
{
     int last_finish = 0; 
     for (int i = 0; i < n; i++)
      { if (arr[i][0] >= last_finish) { selected[count][0] = arr[i][0];
selected[count][1] = arr[i][1]; (count)++;
last_finish = arr[i][1];
}
}
}

int main() {
int n;
printf("Enter the number of activities: ");
scanf("%d", &n);
int arr[n][2], selected[n][2], count = 0;
get(n, arr);
check(n, arr, selected, &count);
printf("Maximum number of activities: %d\n", count);
print(count, selected);
return 0;
}