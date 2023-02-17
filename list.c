#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*head,*tail,*new,*temp;
void create();

void display();

int main()

{
    int n,a,b;
    printf("Enter number of nodes: ");
    scanf("%d ",&n);
    create(n);
    
    printf("The numbers are:\n");
    display();
    create(n);
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
 void add()
 {
    
 }