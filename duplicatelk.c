#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*head,*tail,*new,*temp;
void create(int n);
void insert();
void display();
void dup()
{
     struct node* temp = head;
      struct node* temp1 = head;
     
    struct node* next_next; 
    
    
    if (temp == NULL) 
       return; 
  
    while (temp->next != NULL) 
    {
        temp1=temp1->data;
        for(int i=0;i<5;i++)
        {
           printf("%d->js",temp->data);

 
       if (temp->data == temp1->data) 
       {
                        
           next_next = temp1->next->next;
           free(temp->next);
           temp->next = next_next;  
           temp1=temp1->next;
           printf("%d->",temp->data);
       }

       else 
       {
          temp = temp->next; 
         
       }
        }
}
    
}


int main()
{
     int n,value,m,result;
    printf("Enter number of nodes: ");
    scanf("%d",&n);


   
    create(n);
    
printf("the nodes are before deletion:");
display();
dup();
printf("\nthe nodes are aftr deletion:");
display();

}



void display()
{ int count=0,midIdx;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
        count=count+1;
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