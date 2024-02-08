    int getMiddle(Node *head)
    {
        // Your code here
        Node * slow=head;
        Node * fast=head;
        if(head->next==NULL) return head->data;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
