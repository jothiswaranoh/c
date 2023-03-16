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
void even(int n)
{
    
   
     int kl=0;
     int j=0,i=0;
      
    while(n--)
    {
          temp=head;
         while(temp->next!=NULL)
     {
       
        i=temp->data;
        j=temp->next->data;
      
        if((i%2==0)&&(j%2==0)&&(i<j))
        {
            kl=temp->data;
            temp->data=temp->next->data;
            temp->next->data=kl;
            n=1;
      }
       temp=temp->next;
     }

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
   
  
   
  //display();
  even(n);
  display();
  





return 0;
}