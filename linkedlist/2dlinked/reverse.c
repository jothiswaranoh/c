#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next,*prev;
}*head=NULL,*tail,*newnode,*nextnode,*temp;
void create()
{
    int value,n;
    printf("enter the element count");
    scanf("%d",&n);
     for (int i=0;i<n;i++)
    {
        newnode =(struct node*)malloc(sizeof(struct node));
         scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;

     if(head==NULL)
    {
        head=newnode;
        tail=newnode;

    }
    else
    {
        tail->next= newnode;
        newnode->prev=tail; 
        //temp= newnode;
        tail=newnode;
    }
    }
}
void display()
{
    temp=tail;

    printf("The elements are:\n");
    while(temp!=head)
    {
        
        printf("%d->",temp->data);
        temp=temp->prev;
    }
     printf("%d->",temp->data);

}
int main()
{
    create();
    display();
}