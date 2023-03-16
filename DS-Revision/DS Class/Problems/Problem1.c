#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    struct node *prev;
    char data[4];
    struct node *next;
    struct node *child;
}*head,*tail;

void main()
{
    // 1 2 3 4 null null null 5 6 null null 7 8 9 null null 10 11
    /*
        1     2   3  4  null 
        null null 5  6  null 
                null 7   8   9 null 
                    null 10 11
     */
    char str[100];
    int data;
    scanf("%[^\n]",&str);
    char *temp = strtok(str," ");
    int count = 0;
    while(temp != NULL)
    {
        temp = strtok(NULL," ");
        count++;
    }
}