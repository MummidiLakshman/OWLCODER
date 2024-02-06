    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
       if(head1==NULL or head2==NULL)return head1;
       Node* t1=head1;
       Node* t2=head2;
       Node* h3=NULL;
       Node* t3;
       if(head1->next==NULL or head2->next==NULL)
       {
           if(head1->data==head2->data)
           {
                Node *NN=new Node(head1->data);
                if(h3==NULL) h3=NN;
                return h3;
           }
       }
       while((t1) and (t2))
       {
           if(t1->data==t2->data)
           {
               Node* NN=new Node(t1->data);
               if(h3==NULL) 
               {
                   h3=NN;
                   t3=h3;
               }
               else
               {
                   t3->next=NN;
                   t3=t3->next;
               }
               t1=t1->next;
               t2=t2->next;
           }
           else if(t1->data < t2->data)
           {
               t1=t1->next;
           }
           else
           {
               t2=t2->next;
           }
       }
       return h3;
    }
