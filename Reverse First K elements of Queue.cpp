    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        vector<int> v;
        while(!q.empty())
        {
            v.push_back(q.front());
            q.pop();
        }
        reverse(v.begin(),v.end()-(v.size()-k));
        for(int i=0;i<v.size();i++)
        {
            q.push(v[i]);
        }
        return q;
    }
