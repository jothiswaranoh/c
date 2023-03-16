#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp,*newnode,*temp1;
void create()
{
    int n;
    printf("element count: ");
    scanf("%d",&n);
while(n--)
{
newnode=(struct node*)(malloc(sizeof(struct node)));
printf("enter the data: ");
scanf("%d",&newnode->data);


if(head==NULL)
{
head=newnode;
temp=newnode;
newnode->next=head;
}
else
{
temp->next=newnode;
temp=newnode;
newnode->next=head;
}
}
}
void display()
{
    
    temp=head;
    while(temp->next!=head)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("%d->",temp->data);

}
void insertfront()
{ 
  
    int value;
     newnode =(struct node*)malloc(sizeof(struct node));
         scanf("%d",&value);
           newnode->data=value;
    
            newnode->next=head;

            head=newnode;
            temp->next=newnode;
}
void insertend()
{ 
    
    int value;
     newnode =(struct node*)malloc(sizeof(struct node));
         scanf("%d",&value);
newnode->data=value;

newnode->next=head;
temp->next=newnode;

temp=newnode;
} 
void insertmid()
{
    int value,pos;
     newnode =(struct node*)malloc(sizeof(struct node));
         scanf("%d",&value);
         printf("enter position");
          scanf("%d",&pos);
          temp1=head;
          for(int i=0;i<pos-1;i++)
          {
                temp1=temp1->next;
          }
          newnode->data=value;
           newnode->next=temp1->next;
         
          temp1->next=newnode;





}
void deletionfront()
{ 
    temp1=head;
    head=temp1->next;
    temp->next=temp1->next;
 
}
void deletionend()
{
    //temp1=tail;
  //  tail=temp->prev;

   // temp->next=NULL;
   temp1=head;
    while(temp1->next->next!=head)
    {
       // printf("%d->",temp1->data);
        temp1=temp1->next;
    }
   // printf("%d->",temp1->next->data);
   temp1->next=head;


}
void deletionmid()
{
      int pos,i;
printf("Enter position of element to be deleted: ");
scanf("%d",&pos);
temp1=head;
for(i=0;i<pos-1;i++)
{
    temp1=temp1->next;
}
temp1->next=temp1->next->next;

}
void count()
{
     temp1=head;

    int count=1;
    while(temp1->next!=head)
    {
       // printf("%d->",temp1->data);
       count++;
        temp1=temp1->next;
    }
    printf("the total number of : %d",count);

}
void search()
{
     int value;
printf("Enter element to be searched: ");
scanf("%d",&value);
 temp1=head;

    int count=0,flag=0;
 while(temp1->next!=head)
    {
        count++;
        if(value==temp1->data)
    {
        flag=1;
        break;
    }
     
        temp1=temp1->next;
    }
    if(flag==1)
    {
    printf("the element found at  : %d",count);
    }
    else
    {
        printf("the  element not fount");
    }
}
//deletion at front
/*
void deleteAtFront()
{
temp=head;
head=head->next;
temp->next=NULL;

  display();
}


//deletion at end
void deleteAtEnd()
{
    temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    display();
}

//deletion at middle
void deleteAtMiddle()
{
    int i,pos;
    scanf("%d",&pos);
    temp=head;
    for(i=0;i<pos-1;i++)
    temp=temp->next;
    temp->next=temp->next->next;
    display();
}*/
int main()
{
     int option;
     while(1)
     {
        printf("\n\n***Double LinkedList***\n\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.interstion at front\n");
        printf("4.interstion at end\n");
        printf("5.interstion at middle\n");
        printf("6.delete at front\n");
        printf("7.delete at end\n");
        printf("8.delete at middle\n");
        printf("9.search\n");
        printf("10.count\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1: create();
            break;
            
            case 2:
            display();

            break;
            case 3: insertfront();
            break;
           
            case 4: insertend();
            break; 
            case 5:insertmid();
             break;
            case 6:deletionfront(); 
            break;
            case 7: deletionend();
            break;
            case 8: deletionmid();
            break;
            case 9:search();
             break;
            case 10:count();
             break;
    
           default: break;

        }
        

     }


return 0;
}