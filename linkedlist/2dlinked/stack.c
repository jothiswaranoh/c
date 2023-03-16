#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next,*prev;
}*head=NULL,*tail,*newnode,*nextnode,*temp;
void display()
{
    temp=head;

    printf("The elements are:\n");
    while(temp!=NULL)
    {
        
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void push()
{
      temp=tail;
    int value;
     newnode =(struct node*)malloc(sizeof(struct node));
         scanf("%d",&value);
newnode->data=value;
newnode->prev=tail;
newnode->next=NULL;
tail->next=newnode;

tail=newnode;
 display();
}
void pop()
{
    temp=head;
    head=temp->next;
    temp->next=NULL;
    temp->prev=NULL;
    display();
}

int main()
{
     int option;
     while(1)
     {
        printf("\n\n***Double LinkedList***\n\n");
        printf("1.push\n");
        printf("2.pop\n");
          scanf("%d",&option);
        switch(option)
        {
            case 1: push();
            break;
            
            case 2:
                     pop();
                     break;
                     default:break;


    


     }
     }
     }