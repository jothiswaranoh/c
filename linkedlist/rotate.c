#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*newnode;
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
    int n;
    scanf("%d",&n);
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
}
int count()
{
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;

}
void rotate(int x)
{
temp=head;
for(int i=0;i<x;i++)
{
temp=temp->next;
}
printf("%d",temp->data);
}



int main()
{
    int x;
create();
x=count();
rotate(x);
display();
}