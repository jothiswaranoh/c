#include <stdio.h>
#include <string.h>

char new[100];

int check(int arr[], int j)
{
    int ct = 0;
    int k = j - 1;
    int l = j + 1;

    while (k >= 0 && l < strlen(new) && new[k] == new[l])
    {
        ct += 1;
        k--;
        l++;
    }
    arr[j] = ct;
    
    return ct;
}

int main()
{
    int count=0;
    int j = 0;
    char og[] = "abaabc";
    int m = 2 * strlen(og);
    int arr[m];
    
    for (int i = 0; i < strlen(og); i++)
    {
        new[j] = '#';
        new[j + 1] = og[i];
        j = j + 2;
        arr[i] = 0;
        arr[m - i - 1] = 0; 
    }
    
    arr[m] = 0;
    arr[m+1]=0;
    
    for (int i = 0; i < strlen(new); i++)
    {
        check(arr, i);
    }
    
    // print the arr array
    for (int i = 0; i < m+1; i++)
    {
        printf("%d ", arr[i]);
        count++;
    }
    printf("%d",count);
    return 0;
}
