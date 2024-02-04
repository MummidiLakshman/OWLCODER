class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode*head2=NULL;
        ListNode*temp2;
        while(temp!=NULL and temp->next!=NULL) 
        {
            if(temp->val==temp->next->val )
            {
                ListNode* NN=new ListNode(temp->val);
                while(temp and temp->val==NN->val)
                    temp=temp->next;
            }
            else
            {
                ListNode* NN=new ListNode(temp->val);
                if(head2==NULL) 
                {
                    head2=NN;
                    temp2=head2;
                }
                else
                {
                temp2->next=NN;
                temp2=temp2->next;
                }
                temp=temp->next;
            }
        }
        if(temp!=NULL)
        {
            if(head2==NULL) head2=temp;
            else temp2->next=temp;
        }
        return head2;
    }
};
