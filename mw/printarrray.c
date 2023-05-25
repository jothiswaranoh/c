#include<stdio.h>

int count1(int arr[], int n, int t) {
    int count = 0;


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

int main()
{
    int n=8;
    int s=5;
    int arr[]={1,2,3,4,6};
    int count;
    count=count1(arr,s,n);
    
    printf("%d",count);
    return 0;
}