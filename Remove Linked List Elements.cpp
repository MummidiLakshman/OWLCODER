class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        if(head->next==NULL)
        {
            if(head->val==val) return NULL;
            return head;
        }
        while(head and head->val==val)
        {
            head=head->next;
        }
        ListNode* temp=head;
        while(temp and temp->next)
        {
            if(temp->next->val == val)
            {
                if(temp->next->next)
                {
                    temp->next->val=temp->next->next->val;
                    temp->next->next=temp->next->next->next;
                }
                else temp->next=NULL;
            }
            else temp=temp->next;
            
        }
        return head;
