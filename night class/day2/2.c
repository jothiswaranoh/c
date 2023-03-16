
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    /* data */
    int data;
    struct Node* next;
}*head,*temp,*prev,*nextnode;

void triangle(int n){


        /* code */
        struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
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

void pentagonal(int n){


        /* code */
        struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
            value=i*(3*i-1)/2;
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

void hexgonal(int n){

 /* code */
        int value;
        struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
        value=i*(2*i-1);
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
int main(){
    int n;
    triangle(n);
    pentagonal(n);
    hexgonal(n);
    return 0;
}
