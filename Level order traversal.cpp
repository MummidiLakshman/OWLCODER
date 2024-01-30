    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>v;
      queue<Node *>q;
      q.push(node);
     // v.push_back(node->data);
      while(!q.empty())
      {
          Node*cur=q.front();
          v.push_back(cur->data);
          q.pop();
          if(cur->left!=NULL)
          {
              q.push(cur->left);
          }
          if(cur->right!=NULL)
          {
              q.push(cur->right);
          }
          
      }
      return v;
      
    }
