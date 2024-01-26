class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* rev(Node* head)
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        Node* temp=rev(head->next);
        head->next->next=head;
        head->next=NULL;
        return temp;
    }
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        head=rev(head);
        return head;
    }
    
};
