#include<stdio.h>
 
#define Size 4 
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*Top,*tail,*newnode,*temp;
int count=0;

void Push();
//void Pop();
void show();
int main()
{
	int choice;
	
	while(1)	
	{
		printf("\nOperations performed by Stack");
		printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
		printf("\n\nEnter the choice:");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: Push();
					break;
			//case 2: Pop();
					break;
			case 3: show();
					break;
			case 4: exit(0);
			
			default: printf("\nInvalid choice!!");
		}
	}
    return 0;
}
void Push()
{
	int x;
	
	if(count==Size- 1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("\nEnter element to be inserted to the stack:");
        newnode =(struct node*)malloc(sizeof(struct node));

		scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;
    if(Top==NULL)
    {
        Top=newnode;
       

    }
    else
    {
        newnode->next=Top;
    
           Top=newnode;

    }
		Top=Top->next;
		
	}
    count++;
}
void show()
{
   temp=Top;
    if(Top!= NULL)
    {
        printf("values : %d",temp->data);
     while(temp!= NULL)
        {
            printf("values : %d",temp->data);
            temp=temp->next;
        }
    }
    else
    {
        printf("UNDERFLOW");
    }

}
void Pop()
{
    if(Top!=NULL)
    {

        
    }
}