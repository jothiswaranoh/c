t
void display();
int compare_lists(struct node *head1,struct node *head2) {
    struct node *t1;
    struct node *t2;
    t1=head1;
    t2 = head2;
    if(t1==NULL && t2==NULL)
        return 1;
    if(t1 != NULL && t2 == NULL)
        return 0;
     if(t1 == NULL && t2 != NULL)
        return 0;
    else
    {
        while(t1->next != NULL && t2->next != NULL)
        {
            if(t1->data == t2->data)
            {
                t1 = t1->next;
                t2 = t2->next;
            }
            else return 0;
        }
        if(t1->next == NULL && t2->next == NULL)
            return 1;
        else return 0;
    }

}
int main()
{
    int n,value,m,result;
    printf("Enter number of nodes: ");
    scanf("%d",&m);
for(int i=0;i<m;i++)
{
    printf("Enter the number of nodes");
    scanf("%d",&n);
    createnode(n);
}
  result = compare_lists(llist1->head, llist2->head);

        printf("%d\n", result);
    return 0;
}
void createnode(int n)
{
    int value;
    new=(struct node*)malloc(sizeof(struct node));
    for(int i=0;i<n;i++)
    
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
        tail=new;
    }
    
   
    
}
void display()
{
    struct node *current=head;
    while(current!=NULL)
    {
        printf("%d",current->data);
        current=current->next;
    }
    
}
