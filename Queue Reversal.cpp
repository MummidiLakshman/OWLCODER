class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        /*stack<int>st;*/
        stack<int>st;
        while(!q.empty())
        {
            st.push(q.front());
            q.pop();
        }
        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        /*reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            q.push(v[i]);
        }*/
        return q;
    }
};
