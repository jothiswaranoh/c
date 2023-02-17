#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
struct node*prev;
}*head,*tail,*new,*temp,*temp1,*head1,*tail1;
void create(int n);

void insert();
void display();
void add();
int main()
{
     int n,value,m,result;
    printf("Enter number of nodes: ");
    scanf("%d",&n);


   
    create(n);
   

printf("the nodes are:");
add();
}


void display()
{ int count=0;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
        
    }
    
    
    
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
}
}
void js(int n){
    new->data=value;
    new->next=NULL;
    

    if(head1==NULL)
    {
        head1=new;
        tail1=new;

    }
    else
    {
        
        tail1->next=new;
        tail1= new;
     }

}

void add()
{
    int count=0;
   
    temp=head;
    temp1=tail;
   
    while(temp!=NULL)
    {
       
        printf("%d->",temp1->data);
        temp=temp->next;
        temp1=temp1->prev;
        }
    
}