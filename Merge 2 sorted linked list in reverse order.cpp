class Solution
{
    public:
    struct Node* rev(Node *node3)
    {
        if(node3==NULL or node3->next==NULL)
        {
            return node3;
        }
        Node* temp=rev(node3->next);
        node3->next->next=node3;
        node3->next=NULL;
        return temp;
        
    }
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
        // your code goes here
        Node* temp=node1;
        Node* temp2=node2;
        /*while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=temp2;
        return node1;*/
        int i=0;
        int j=0;
        Node *node3=NULL;
        Node* temp3;
        while(temp!=NULL and temp2!=NULL)
        {
            if(temp->data<temp2->data)
            {
                Node* NN=newNode(temp->data);
                if(node3==NULL)
                {
                    node3=NN;
                    temp3=node3;
                }
                else
                {
                    temp3->next=NN;
                    temp3=temp3->next;
                }
                temp=temp->next;
            }
            else
            {
                Node* NN=newNode(temp2->data);
                if(node3==NULL)
                {
                    node3=NN;
                    temp3=node3;
                }
                else
                {
                    temp3->next=NN;
                    temp3=temp3->next;
                }
                temp2=temp2->next;
            }
        }
        while(temp!=NULL)
        {
            Node* NN=newNode(temp->data);
            if(node3==NULL)
            {
                node3=NN;
                temp3=node3;
            }
            else
            {
                temp3->next=NN;
                temp3=temp3->next;
            }
            temp=temp->next;
            
        }
        while(temp2!=NULL)
        {
            Node* NN=newNode(temp2->data);
            if(node3==NULL)
            {
                node3=NN;
                temp3=node3;
            }
            else
            {
                temp3->next=NN;
                temp3=temp3->next;
            }
            temp2=temp2->next;
            
        }
        node3=rev(node3);
        return node3;
    }  
};
