#include<stdio.h>
#include<stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* insert(struct ListNode *tail,int data)
{
    struct ListNode *new_node = malloc(sizeof(struct ListNode));
    new_node->val = data;
    new_node->next = NULL;
    tail->next = new_node;
    tail = new_node;
    return tail;
}
void display(struct ListNode *head)
{
    struct ListNode *temp = head;
    if (head == NULL)
    {
        printf("List is empty\n\n");
        return;
    }
    printf("Elements in list:\n");
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}
void main()
{
    struct ListNode *h1 = malloc(sizeof(struct ListNode));
    struct ListNode *t1 = malloc(sizeof(struct ListNode));
    struct ListNode *new_node = malloc(sizeof(struct ListNode));
    h1 = new_node;
    t1 = new_node;
    t1 = insert(t1,10);
    t1 = insert(t1,20);
    t1 = insert(t1,30);
    display(h1->next);
}