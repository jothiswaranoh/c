#include <stdio.h>
#define MAX 50
void insert();
int queue_array[MAX];
int rear = -1;
int front = -1;
int main()
{
insert();
return 0;
}
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
    if (front == - 1)

        /*If queue is empty */
    front = 0;
    printf("Inset the element in queue : ");
    scanf("%d", &add_item);
    rear = rear + 1;
    queue_array[rear] = add_item;

    }
}
