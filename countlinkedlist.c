#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*head,*tail,*new,*temp;
void create(int n);
void insert();
void display();
int main()
{
     int n,value,m,result;
    printf("Enter number of nodes: ");
    scanf("%d",&n);


   
    create(n);
    
printf("the nodes are:");
display();


}


void display()
{ int count=0;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
        count=count+1;
    }
        printf("\nthe length of :%d",count);
        if(count%2==0)
        {
            printf("\neven");
        }
        else
        {
        printf("\nodd");
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