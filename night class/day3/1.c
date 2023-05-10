// Given a positive number n, find the total number of ways in which n hats can be returned to n people such that no hat makes it back to its owner.

// This problem is known as the hat–check problem and can be solved by counting the number !n of derangements of an n–element set. A derangement is a permutation of a set’s elements, such that no element appears in its original position.
// For example,

// Input:  2–hat set [h1, h2]
 
// Output: The total number of derangements !2 is 1
 
// [h2, h1]
 
// Input:  4–hat set [h1, h2, h3, h4]
 //
// Output: The total number of derangements !4 is 9
        
// [h2, h1, h4, h3]
// [h2, h3, h4, h1]
// [h2, h4, h1, h3]
// [h3, h4, h1, h2]
// [h3, h1, h4, h2]
// [h3, h4, h2, h1]
// [h4, h1, h2, h3]
// [h4, h3, h1, h2]
// [h4, h3, h2, h1]
//9

#include <stdio.h>
//arrangements means->!
int arrangements(int n)
{
    if (n == 1 || n == 2) {
        return n - 1;
    }

    return (n - 1) * (arrangements(n - 1) + arrangements(n - 2));
}
 
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("The total number of arrangements of a %d element set is %d",
        n, arrangements(n));
 
    return 0;
}