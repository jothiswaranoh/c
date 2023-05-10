
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
int count1=0;
int x;
struct node
{
   char data;
    struct node *next;
}*head,*temp,*head1,*temp1,*newnode;
void create()
{
int n;

scanf("%d",&n);

   while(n--)
   {
newnode=(struct node*)(malloc(sizeof(struct node)));
printf("enter the data: ");
scanf(" %c",&newnode->data);
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
void end()
{
    temp=head;
    while(temp1!=NULL)
    {
temp=temp->next;
    }
}
// int check()
// {
//     temp1=head;
   
// }
int main()
{
    create();
    end();
    // check();
    return 0;
}