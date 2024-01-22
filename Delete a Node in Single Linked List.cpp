Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x==1)
    {
        head=head->next;
        return head;
    }
    Node* temp=head;
    x-=1;
    while(--x)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
