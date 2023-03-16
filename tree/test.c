#include<stdio.h>
#include<stdlib.h>
struct node
{
    int key;
    struct node *left,*right;
};
struct node *newnode(int item)
{
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
};
struct node *insert_node(struct node *root,int item)
{
    if(root==NULL)
    {
    return 0;
    }
    else{
    newnode(item);
    }
    if(root->key>item)
    root->left=insert_node(root->left,item);
    if(root->key<item)
    
    root->right=insert_node(root->right,item);
    return root;

}

struct node *inorder(struct node *root)
{
    if(root==NULL)
    {
    return 0;
    }
    inorder(root->left);
    printf("%d",root->key);
    inorder(root->right);
    return 0;
}


int main()
{
    int ch,item;
    struct node *root=malloc(sizeof(struct node));
    root=NULL;
    
    while(1)
    {
        scanf("%d",&ch);
    switch(ch)
    {
        
        case 1:printf("enter the value");
        scanf("%d",&item);
        root=insert_node(root,item);
        break;
        case 2:inorder(root);
        break;
        case 3:exit(0);
        break;
        default:
        printf("error");
    }
    }
    return 0;
}


