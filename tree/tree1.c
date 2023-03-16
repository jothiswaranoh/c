#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left,*right;
 
}*root,*temp1,*new,*temp2;

void create()
{
    int n,flag=0;
    do{
        
        new=(struct node *)malloc(sizeof(struct node));
       
      scanf("%d",&n);
        new->data=n;
        new->right=NULL;
        new->left=NULL;
        if(root==NULL)
        {
            root=new;
            temp1=new;
            temp2=new;
        }
        else{

         
            if(temp1->left==NULL)
            {
                temp1->left=new;
               
                flag=1;
            }
             else if(temp1->right==NULL)
            {
               temp1->right=new;
           
               flag=0;
            }
         
            else if(flag==0){
                temp1=temp1->left;
                temp1->left=new;
                flag=1;
         
                
            }
            else
            {
        temp1=temp2->right;
        flag=0;
        temp2=temp2->left;
            }
         
        }
  
    }while(n>0);
}
void display()
{
    int flag=1;
temp1=root;
temp2=root;
while(temp1!=NULL)
{
printf("%d",temp1->data);
if(flag==1)
{
temp1=temp1->left;
flag=0;
}
else
{
temp1=temp1->right;
flag=1;
}

}



}

int main()
{
    int ch,item;
ch=1;
//scanf("%d",&ch);
   switch(ch)
    {
        
        case 1:printf("enter the value");
      
        create();
        display();
        break;
       // case 2:inorder();
        //break;
      //  case 3:exit(0);
       // break;
        default:
        printf("error");
    }
    return 0;
}
