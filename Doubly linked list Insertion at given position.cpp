   // Your code here
   Node* NN =new Node(data);
   Node* temp=head;
   if(head->next==NULL)
   {
       head->next=NN;
       NN->prev=head;
       return;
   }
//   pos=pos+1;
   while(pos-- and temp and temp->next)
   {
       temp=temp->next;
   }
   if(temp->next==NULL)
   {
       temp->next=NN;
       NN->prev=temp;
       return;
   }
   temp->next->prev=NN;
   NN->prev=temp;
   NN->next=temp->next;
   temp->next=NN;
