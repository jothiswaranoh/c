#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *prev;
    int data;
    struct node *next;
}*new,*tail,*temp,*head; //variable defining
void create(int n);
void display();
void insertFront();
void insertEnd();
void insertMiddle();
void deleteFront();
void deleteEnd();
void deleteMiddle();


void main()
{
    int n;
    printf("Enter number of nodes:\n");
    scanf("%d",&n);
    create(n);
display();
insertFront();
insertEnd();
insertMiddle();
deleteFront();
deleteEnd();
deleteMiddle();
}



void create(int n)
{
    int i,value;

    for(i=0;i<n;i++){
        new= (struct node*)malloc(sizeof(struct node));
    printf("Enter the value to be inserted:\n");
    scanf("%d",&value);
    new->prev=NULL;
    new->data=value;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        tail=new;
    }
    else
    {
        tail->next=new;
        new->prev=tail;
        tail=new;
    }

    }
}
void display()
{
    temp=head;
    printf("The elements are:\n");
    while(temp!=NULL)
    {
        
        printf("%d\n",temp->data);
        temp=temp->next;
    }

}

void insertFront()
{
    
    int value;
     printf("Enter element to be insert at fornt:\n");
new=(struct node*)malloc(sizeof(struct node));
scanf("%d",&value);

new->data=value;
new->prev=NULL;
head->prev=new;
new->next=head;
head=new;
display();
}
void insertEnd()
{
    int value;
new=(struct node*)malloc(sizeof(struct node));
    printf("Enter element to be insert at end:\n");
    scanf("%d",&value);
   
    new->data=value;
    new->next=NULL;
    tail->next=new;
    new->prev=tail;
    tail=new;
    display();
}

void insertMiddle()
{
    int i,pos,value;
   printf("Enter element to be insert at middle:\n");
scanf("%d",&value);
printf("Enter the position: ");
scanf("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++)
{
    temp=temp->next;
}
new=(struct node*)malloc(sizeof(struct node));
    new->data=value;
    new->next=temp->next;
    new->prev=temp;
    temp->next=new;
    temp->next->prev=new;

display();
}

 void deleteFront()
 {
    printf("After Deletion at Front:\n");
    temp=head;
    head=head->next;
    temp->next=NULL;
    head->prev=NULL;
    
    display();
 } 

 void deleteEnd()
 {
    printf("After Deletion at End:\n");
temp=head;
while(temp->next!=tail)
{
    temp=temp->next;
}
temp->next=NULL;
tail=temp;
display();
 }

 void deleteMiddle()
 {
    int pos,i;
printf("Enter position of element to be deleted: ");
scanf("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++)
{
    temp=temp->next;
}
temp->next=temp->next->next;

temp->next->prev=temp;
display();
 }