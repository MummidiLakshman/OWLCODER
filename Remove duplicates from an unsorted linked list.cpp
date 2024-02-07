    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        Node*temp=head;
        map<int,int>mp;
        mp[head->data]=1;
        while(temp!=NULL and temp->next!=NULL)
        {
            if(mp.find(temp->next->data)==mp.end())
            {
                mp[temp->next->data]++;
                temp=temp->next;
            }
            else
                temp->next=temp->next->next;
            
        }
        return head;
    }
