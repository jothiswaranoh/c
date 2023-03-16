
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    /* data */
    int data;
    struct Node* next;
}*head,*temp,*prev,*nextnode;

void triangle(){


        /* code */
        struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
       fgets(str, sizeof str, stdin);
       value=i*(i+1)/2;
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            temp=newNode;
        }else{
            temp->next=newNode;
            temp=temp->next;
            //temp=newNode;
        }
    

    temp=head;
    while (temp!=NULL)
    {
        /* code */
        printf("%d ",temp->data);
        temp=temp->next;
    }

}