  public:
    //Function to check whether the list is palindrome.
    // int rev(Node *slow)
    // {
    //     if(slow==NULL or slow->next==NULL) return slow;
    //     Node* temp=rev(slow->next);
    //     slow->next->next=slow;
    //     slow->next=NULL;
    //     return slow;
    // }
    Node* rev(Node* slow)
    {
        Node*prev=NULL;
        Node*cur=slow;
       
        while(cur!=NULL)
        {
            Node*fro=cur->next;
            cur->next=prev;
            prev=cur;
            cur=fro;
            //fro=cur->next;
           // prev=cur->next;
        }
        return prev;
    }
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL or head->next==NULL) return head;
        Node*slow=head;
        Node*fast=head;
        while(fast!=NULL and fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* pal=rev(slow);
        Node* temp1=head;
       // Node*temp2=slow;
        while(pal!=NULL){
            if(temp1->data!=pal->data)
            {
                return 0;
            }
            temp1=temp1->next;
            pal=pal->next;
        }
        return 1;
    }
