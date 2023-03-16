#include<stdio.h>
#include<stdlib.h>

void create();

void display();


void insertfront();

void insertend();
void insertmid();

void deletionfront();
void deletionend();
void deletionmid();
void count();
void search();
void push();
void pop();
void endque();
void deque();


struct node{
int data;
struct node *next,*prev;
}*head=NULL,*tail,*newnode,*nextnode,*temp;
int main()
{
     int option;
     while(1)
     {
        printf("\n\n***Double LinkedList***\n\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.interstion at front\n");
        printf("4.interstion at end\n");
        printf("5.interstion at middle\n");
        printf("6.delete at front\n");
        printf("7.delete at end\n");
        printf("8.delete at middle\n");
        printf("9.search\n");
        printf("10.count\n");
         printf("11.push\n");
        printf("12.pop\n");
         printf("13.endque\n");
        printf("14.deque\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1: create();
            break;
            
            case 2:
                     display();

            break;
            case 3: insertfront();
            break;
            case 4: insertend();
            break;
            case 5:insertmid();
             break;
            case 6:deletionfront(); 
            break;
            case 7: deletionend();
            break;
            case 8: deletionmid();
            break;
            case 9:search();
             break;
            case 10:count();
             break;
             case 11:push();
             break;
             case 12:pop();
             break;
             case 13:endque();
             break;
             case 14:deque();
             break;
    // break;
           default: break;

        }
        

     }
}
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
    temp=head;

    printf("The elements are:\n");
    while(temp!=NULL)
    {
        
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
void insertfront()
{ 
    temp=head;
    int value;
     newnode =(struct node*)malloc(sizeof(struct node));
         scanf("%d",&value);
           newnode->data=value;
           newnode->prev=NULL;
newnode->next=head;
temp->prev=newnode;
head=newnode;
}
void insertend()
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
} 
void insertmid()
{
    int value,pos;
     newnode =(struct node*)malloc(sizeof(struct node));
         scanf("%d",&value);
         printf("enter position");
          scanf("%d",&pos);
          temp=head;
          for(int i=0;i<pos-1;i++)
          {
                temp=temp->next;
          }
          newnode->data=value;
           newnode->next=temp->next;
          newnode->prev=temp;
          temp->next=newnode;

temp->next->prev=newnode;



}
void deletionfront()
{ 
    temp=head;
    head=temp->next;
    temp->next=NULL;
    temp->prev=NULL;
}
void deletionend()
{
    temp=tail;
    tail=temp->prev;
    temp->next=NULL;
}
void deletionmid()
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
}
void count()
{
     temp=head;

    int count=0;
    while(temp!=NULL)
    {
        count++;
     
        temp=temp->next;
    }
    printf("the total number of : %d",count);

}
void search()
{
     int value;
printf("Enter element to be searched: ");
scanf("%d",&value);
 temp=head;

    int count=0,flag=0;
    while(temp!=NULL)
    {
        count++;
        if(value==temp->data)
    {
        flag=1;
        break;
    }
     
        temp=temp->next;
    }
    if(flag==1)
    {
    printf("the element found at  : %d",count);
    }
    else
    {
        printf("the  element not fount");
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
}
void pop()
{
    temp=head;
    head=temp->next;
    temp->next=NULL;
    temp->prev=NULL;
}
void deque()
{
temp=head;
    head=temp->next;
    temp->next=NULL;
    temp->prev=NULL;
}
void endque()
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
}