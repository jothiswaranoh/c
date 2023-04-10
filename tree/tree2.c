#include <stdio.h>
#include <stdlib.h>

int count=-1,rot;

struct node
{
    int data;
    struct node *left;
    struct node *right;
}*newnode,*root;

void insert();
void search(struct node *newnode,struct node *root);
void inorder_display(struct node *root);
void preorder_display(struct node *root);
void postorder_display(struct node *root);



int main()
{
insert();
//inorder_display(root);
printf("\n");
preorder_display(root);
printf("\n");
//postorder_display(root);
}
void insert()
{
    int choice=1;
    while(choice==1)
    {
        newnode=malloc(sizeof(struct node));
        newnode->left=0;
        newnode->right=0;
        printf("Enter the data :");
        scanf("%d",&newnode->data);
        if(root==0)
        {
            root=newnode;
        }
        else
        {
            search(newnode,root);
        }
        printf("Choice :");
        scanf("%d",&choice);
    }
}
void search(struct node *newnode,struct node *root)
{
    if((newnode->data)<(root->data)&&root->left==0)
    {
        root->left=newnode;
    }
    if((newnode->data)>(root->data)&&root->right==0)
    {
        root->right=newnode;
    }
    if((newnode->data)<(root->data)&&root->left!=0)
    {
        search(newnode,root->left);
    }
    if((newnode->data)>(root->data)&&root->right!=0)
    {
        search(newnode,root->right);
    }
}


void inorder_display(struct node *root)
{

    if(root==0)
    {
        return;
    }
    else
    {
        inorder_display(root->left);

        printf("%d ",root->data);
        inorder_display(root->right);
     
}
}
void preorder_display (struct node *temp)
{

    if(temp!=NULL)
    {
         printf("->%d ",temp->data);
       
    
       if(count==-1)
        {
        rot=temp->data;
        count=0;
        }
        else
        {
            count=count+temp->data;
        
      
    
    printf("\n the calue of count is %d",count);
    if(count==rot)
    {
        printf("true");
    }
    }
     preorder_display(temp->left);
         preorder_display(temp->right);
    }
}


void postorder_display (struct node *temp)
{

    if(temp!=NULL)
    {
        postorder_display(temp->left);
         postorder_display(temp->right);
          printf("%d",temp->data);
    }
}
