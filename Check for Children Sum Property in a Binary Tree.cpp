    int isSumProperty(Node *root)
    {
     // Add your code here
     if(root==NULL) return 0;
     if(root->left==NULL and root->right==NULL) return 1;
      int s=0,ans=1;
      //childsum(root,s);
       queue<Node *>q;
       q.push(root);
    //   s+=root->left->data;
    //   s+=root->right->data;
      while(!q.empty())
      {
          Node*cur=q.front();
          if(cur->left!=NULL)
          {
              s+=cur->left->data;
              q.push(cur->left);
          }
          if(cur->right!=NULL)
          {
              s+=cur->right->data;
              q.push(cur->right);
          }
          if(cur->left!=NULL or cur->right!=NULL)
          {
              if(s!=cur->data)
              {
                 ans=0;
              }
          }
          q.pop();
          s=0;
      }
      if(ans==0) return 0;
      else return 1;
    }
