#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*temp3;
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    } 
     
    
}
void even()
{
    int flag=0;
     temp=head;
     while(temp!=NULL)
     {
     if(flag==1)
     {
        
        temp->next=temp->next->next;
        flag--;
 }
     flag++;
     }
}


void sort()
{
temp=head;
     temp3=head->next;
   int temp2;
    while(temp!=NULL)
    {
        
         while(temp3!=NULL)
    {
      
       if((temp->data)<(temp3->data))
       {
       /// printf("enter the data: ");
        temp2=temp->data;
        temp->data=temp3->data;
        temp3->data=temp2;
       }
       temp3=temp3->next;
    }
    temp3=head;
    temp=temp->next;
}
}
void create()
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
    

}



int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
  create();
    }
    //display();
   
  
   
  display();
  even();
  display();
  





return 0;
}