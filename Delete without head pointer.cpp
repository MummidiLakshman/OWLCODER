class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del)
    {
       // Your code here
       if(head==del)
       {
           head=head->next;
           return;
       }
       Node *temp=head;
       while(temp->next!=del)
       {
           temp=temp->next;
       }
       temp->next=temp->next->next;
    }

};
