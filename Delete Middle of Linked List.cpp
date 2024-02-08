    Node*slow=head;
    Node *fast=head;
    //Node* temp=head;
    if(head->next==NULL) return NULL;
    if(head->next->next==NULL)
    {
        head->next=NULL;
        return head;
    }
    while(fast!=NULL and fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->data=slow->next->data;
    slow->next=slow->next->next;
    return head;
