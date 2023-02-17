#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*head,*tail,*new,*temp,*head1,*tail1;
void create(int n);
void create1(int n);
void insert();
void display();
void display1();
void display3();
int main()
{
     int n,value,m,result;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
     printf("Enter number of nodes: ");
    scanf("%d",&m);


   
    create(n);
    create1(m);
printf("the nodes are:");
display();
printf("\nthe nodes are:");
display1();
printf("\nthe nodes are:");
display3();



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
void display1()
{ 
    temp=head1;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
       
    }

}
void display3()
{ 
    temp=head;
    if(temp==NULL)
    {
        temp=head1;
        while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
       
    }
    }
    else
    {
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
       
    }
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
void create1(int n){
    int i,value1;
    for (i=0;i<n;i++)
    {
    new =(struct node*)malloc(sizeof(struct node));
    scanf("%d",&value1);
    new->data=value1;
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
}
