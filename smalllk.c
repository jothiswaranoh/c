#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*head,*tail,*new,*temp,*temp1,*head1,*tail1;
void create(int n);
void create1(int m);
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


void add()
{
    
    int js=0,ks=0;
    temp=head;
    
    
    while(temp!=NULL)
    {
        if(js>temp->data)
        {
            if(ks>temp->data)
            {
        ks=temp->data;
        temp=temp->next;
            }
            else
            {
                 temp=temp->next;
            }

        }
        else
        {
            js=temp->data;
           
            temp=temp->next;
        }
    
}
printf("%d",ks);
}