
#include<stdio.h>
#include<stdlib.h>
int count=0;
int count1=0;
int c=0;
int x;
struct node
{
    int data;
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
void display()
{
    temp=head;
    while(temp!=NULL)
{
    printf("%d->",temp->data);
    temp=temp->next;
}
}
int check1(int x)
{
    
    temp1=head;
    int y=temp1->data;
    
    while(temp1!=NULL)
    {
        if(x==y)
        {
          //  temp1->next=temp1->next->next;
            // printf("x->%d",x);
            c=c+1;
            temp1->next=temp1->next->next;
            return 1;
        }
        else
        {
            y=y+temp1->data;
            //  printf(" %d",y);
          }
        temp1=temp1->next;
    }
     
    return 0;
}
void check()
{
    int js=0;
    int z;
    temp=head;
    while(temp!=NULL)
{
    if(temp->data==5)
    {
 temp=temp->next;
    }
    else{
        x=temp->data-5;
      count=count+1;
      z=check1(x);
    //   printf("\n%d",z);
      js=z+js;
        temp=temp->next;
       
    }

    
}
    //  printf("\n%d",js);
    //     printf("========%d",count);
        if(js==count)
        {
            printf("true");
        }
        else
        {

            printf("false");
        }
}
int main()
{
    create();
    check();
    //display();

    return 0;
}