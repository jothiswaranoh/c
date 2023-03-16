#include<stdio.h>
#include<stdlib.h>
struct node 
{
    struct node *prev;
   char ch[100];
    struct node *next;
}*new,*tail,*temp,*head;
void create(int n)
{
       int i;
       char value[100];

    for(i=0;i<n;i++)
    {
        new= (struct node*)malloc(sizeof(struct node));
    printf("Enter the value\n");
   // scanf("%c",&value);
 fgets(value, sizeof value, stdin);
    new->ch=value;
    new->next=NULL;
    if(head==NULL)
    {
        head=new;
        tail=new;
    }
    else
    {
        tail->next=new;
   
        tail=new;
    }

    }

}

void display()
{
    temp=head;
    printf("The elements are:\n");
    while(temp!=NULL)
    {
        
        printf("%s\n",temp->ch);
        temp=temp->next;
    }

}
int  main()
{
    int n,t;
      scanf("%d",&t);
      while(t--)
      {
    printf("Enter number of nodes:\n");
    scanf("%d",&n);
    create(n);
display();
      }
      return 0;
}