#include<stdio.h>
#include<stdlib.h>
int count=0;
int count1=0;
struct node
{
    int data;
    struct node *next;
}*head,*temp,*head1,*temp1,*newnode;
int value(int n)
{
    int value=1;
    for(int i=1;i<n;i++)
    {
    value=value*10;
    }
    return value;
}
int display(int count)
{

    int x,y=0;
    temp=head;
    while(temp!=NULL)
    {
       
       // printf("%d->",temp->data);
       // printf("value of count %d-",count);
       x=(temp->data*value(count));
       y=x+y;
                //x=value(count);
      // printf("\nvalue of x %d-",y);
        temp=temp->next;
        count=count-1;
        
    }
    //printf("%d->",y);
    
    return y;
}
int display1(int count1)
{
    int x,y=0;
    temp1=head1;
    while(temp1!=NULL)
    {
        x=(temp1->data*value(count1));
       y=x+y;
               // x=value(count);
      //printf("\nvalue of x %d-",y);
        temp1=temp1->next;
        count1=count1-1;
    }
   // printf("%d->",y);
    return y;
}
void create()
{
int n;
scanf("%d",&n);
count=n;
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
void create1()
{
int n;
scanf("%d",&n);
count1=n;
   while(n--)
   {
newnode=(struct node*)(malloc(sizeof(struct node)));
printf("enter the data: ");
scanf("%d",&newnode->data);
newnode->next=NULL;

if(head1==NULL)
{
head1=newnode;
temp1=newnode;
}
else
{
temp1->next=newnode;
temp1=newnode;
}
   }

}
int main()
{
    create();
    create1();
  display(count);
  display1(count1);

     
     printf("%d",display(count)-display1(count1));
//     printf("%d",value(count));



return 0;

}