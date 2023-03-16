#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp;
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void create()
{
    int choice;

 do
    {
        
struct node * newnode;
newnode=(struct node*)(malloc(sizeof(struct node)));
printf("enter the data: ");
scanf("%d",&newnode->data);
newnode->next=NULL;

if(head==NULL)
{
head=newnode;
temp=newnode;
}
else
{
temp->next=newnode;
temp=temp->next;
}
    
printf("1 to continue: ");
scanf("%d",&choice);
}while(choice==1);
}

void createat()

{
    struct node * newnode;
    newnode=(struct node*)(malloc(sizeof(struct node)));
    temp=head;
printf("enter the data insert at 1st: ");
scanf("%d",&newnode->data);

newnode->next=head;
head=newnode;
//head=newnode;

    

}

//deletion at front
void deleteAtFront()
{
temp=head;
head=head->next;
temp->next=NULL;

  display();
}


//deletion at end
void deleteAtEnd()
{
    temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    display();
}

//deletion at middle
void deleteAtMiddle()
{
    int i,pos;
    scanf("%d",&pos);
    temp=head;
    for(i=0;i<pos-1;i++)
    temp=temp->next;
    temp->next=temp->next->next;
    display();
}
void createend()

{
    struct node * newnode;
    newnode=(struct node*)(malloc(sizeof(struct node)));
    temp=head;
    printf("enter the data insert at 1st: ");
    scanf("%d",&newnode->data);
    temp=head;
    while(temp!=NULL)
    {
        //printf("%d->",temp->data);
        temp=temp->next;
    }

    temp->next=newnode;

//head=newnode;

    

}
int main()
{
    
  create();
  display();
 // createat();
 createend();

display();


return 0;
}