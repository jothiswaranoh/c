#include<stdio.h>
#include<stdlib.h>
int m;
struct node
{
    int data;
    struct node *next;
}*head,*temp,*newnode,*temp1;
void create()
{
int n;

printf("element count: ");
scanf("%d",&n);
m=n;
while(n--)
{
newnode=(struct node*)(malloc(sizeof(struct node)));
printf("enter the data: ");
scanf("%d",&newnode->data);

if(head==NULL)
{
head=newnode;
temp=newnode;
newnode->next=head;
}
else
{
temp->next=newnode;
temp=newnode;
newnode->next=head;
}
}
}
void display()
{
    temp=head;
    while (temp->next!=head)
    {
      printf("%d->",temp->data);
      temp=temp->next;
    }
    printf("%d->",temp->data);
    
}
void rev()
{
    temp=head;
    while (temp->next->next!=head)
    {
      
      temp=temp->next;
    }
    printf("%d->",temp->next->data);
    head=temp->next;
    
}

int main()
{
create();

while (m>0)
{
  rev();  
  m--;/* code */
}






}
