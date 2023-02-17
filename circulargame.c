#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
struct node*prev;
}*head,*tail,*new,*temp,*temp1;
void create(int n);



void display(int n);
int main()
{
    int n,a,b;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    create(n);
    

display(n);
    return 0;
}
void create(int n){
    int i,value;
    for (i=0;i<n;i++)
    {
    new =(struct node*)malloc(sizeof(struct node));
    scanf("%d",&value);
    new->data=value;
    


    if(head==NULL)
    {
        head=new;
        tail=new;
        new->next=head;

    }
    else
    {
        
        tail->next=new;
        tail=new;

        tail->next=head;
    }
}}



void display(int n)
{
    
    temp=head;
    temp1=tail;
 
  if(head==NULL)
  {
    printf("empty");
  }
  else
    { 
        printf("node ");
        do{

        
            
            
     
      
         if(temp->data==temp1->data)
         {
        
         printf("%d->",temp->data);
            
         }
         free(temp->next->next);
        temp=temp->next->next->next;
        temp1=temp1->next;
     

} while((temp!=head));
      
     }
  
   
}
