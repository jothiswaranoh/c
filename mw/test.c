#include <stdio.h>

// Function to count the number of triplets
int countTriplets(int arr[], int n, int t) {
    int count = 0;

    // Sort the array in ascending order
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] <= t) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int t, n;
    printf("Enter the threshold value: ");
    scanf("%d", &t);
    printf("Enter the number of values in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array values: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = countTriplets(arr, n, t);
    printf("Number of triplets satisfying the conditions: %d\n", result);

    return 0;
}
