class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node *temp=head;
        Node *NN=new Node(data);
        if(head->data>data)
        {
            NN->next=head;
            head=NN;
            return head;
        }
        while(temp->next!=NULL and (temp->next->data)<data)
        {
            temp=temp->next;
        }
        if(temp->next==NULL  and temp->data < data) 
        {
            temp->next=NN;
            return head;
        }
        NN->next=temp->next;
        temp->next=NN;
        return head;
    }
};
