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
int main()
{
    int n=5;
struct node *newnode;


   while(n--)
   {
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
temp=newnode;
}
   }

display();



return 0;22
}