#include<stdio.h>
#include<stdlib.h>

struct Node
{
    /* data */
    int data;
    struct Node* next;
}*head,*head1,*head2,*temp,*temp1,*temp2,*prev,*nextnode;






void triangle(){

    int n,value;
    scanf("%d",&n);
  for(int i=1;i<=n;i++)
    {
        /* code */
        struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
       value=i*(i+1)/2;
        newNode->data=value;
        newNode->next=NULL;

        if(head==NULL){
            head=newNode;
            temp=newNode;
        }else{
            temp->next=newNode;
            temp=temp->next;
            //temp=newNode;
        }
    }

    temp=head;
    while (temp!=NULL)
    {
        /* code */
        printf("%d ",temp->data);
        temp=temp->next;
    }

}

void pentagonal(){

    int n,value;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        /* code */
        struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
        newNode->data=i*(3*i-1)/2;
        newNode->next=NULL;

        if(head1==NULL){
            head1=newNode;
            temp1=newNode;
        }else{
            temp1->next=newNode;
            temp1=temp1->next;
            //temp=newNode;
        }
    }

    temp1=head1;
    while (temp1!=NULL)
    {
        /* code */
        printf("%d ",temp1->data);
        temp1=temp1->next;
    }

}

void hexgonal(){

      int n;
    scanf("%d",&n);
for(int i=1;i<=n;i++)
    {
        /* code */
        int value;
        struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
value=i*(2*i-1);
        newNode->data=value;
        newNode->next=NULL;

        if(head2==NULL){
            head2=newNode;
            temp2=newNode;
        }else{
            temp2->next=newNode;
            temp2=temp2->next;
            //temp=newNode;
        }
    }

    temp2=head2;
    while (temp2!=NULL)
    {
        /* code */
        printf("%d ",temp2->data);
        temp2=temp2->next;
    }

}

void search()
{
    int value,value1,value2;
    temp=head;
   // value=temp->data;
    temp1=head1;
   // value1=temp1->data;
    temp2=head2;
    //value2=temp2->data;
    int count=0,flag=0;
 while(temp!=NULL)
 {
       while (temp1!=NULL)
        {
        while (temp2!=NULL)
            {
        
   
        if(temp->data==temp1->data==temp2->data)
    {
        count++;
        flag=1;
        if(count>1)
        {
    
              printf("\nfounded %d",temp->data);
        }

        
    }
           temp2=temp2->next;      
       
            }
        temp1=temp1->next;
        }
        temp=temp->next;
    }
    

}
        

int main(){
    triangle();
    pentagonal();
    hexgonal();
    search();
    return 0;
}