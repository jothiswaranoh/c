//deletion at front
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
}