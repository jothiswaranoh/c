#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*head,*tail,*new,*temp;
void create();
void insert();
void display();
void deletion();
void deletionm();

int main()
{
    int n,a,b;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    create(n);
    printf("value to be inserted at front:\n");
    insert();
    printf("The numbers are:\n");
    display();
    printf("enter 1 to delete a number ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("enter the 1.posiiton to delete 2.delete at end");
        scanf("%d",&b);
        if(b==1)
        {
            deletionm();
        }
        else if(b==2)
        {
            deletion();
        }
 
        else
             {
           printf("error");
                }
    }
display();
    return 0;
}
void create(int n){
    int i,value;
    for (i=0;i<n;i++)
    {
    new =(struct node*)malloc(sizeof(struct node));
    scanf("%d",&value);
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
        tail= new;
    }
}}



void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}


void insert()
{
    int value;
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&value);
    new->data=value;
    new->next=head;
    head=new;
}

void deletion()
{

temp=head;
while(temp->next!=tail)
{
    temp=temp->next;
}
temp->next=NULL;
tail=temp;

}
void deletionm()
{ int pos,i;
printf("Enter the position:");
scanf("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++)
temp=temp->next;
temp->next=temp->next->next;

}