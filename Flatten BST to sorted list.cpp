    void bst(Node* root,Node *&r1, Node *&temp)
    {
        if(root==NULL) return;
        bst(root->left,r1, temp);
        Node *NN= new Node(root->data);
        if(r1==NULL)
        {
            r1=NN;
            temp=r1;
        }
        else
        {
            temp->right=NN;
            temp=temp->right;
        }
        bst(root->right, r1, temp);
    }
    Node *flattenBST(Node *root)
    {
        // code here 
        Node* r1=NULL;
        Node*temp;
        bst(root,r1,temp);
        return r1;
        
    }
