class Solution{
public:
    void insertbottom(stack<int> &s,int x)
    {
        if(s.empty())
        {
            s.push(x);
            return;
        }
        int b=s.top();
        s.pop();
        insertbottom(s,x);
        s.push(b);
    }
    void Reverse(stack<int> &St){
        if(St.empty())
        {
            return ;
        }
        int a=St.top();
        //St.push(a);
        St.pop();
        Reverse(St);//until last element 
        //St.push(a);
        insertbottom(St,a); // stack moves to function with element
    }
};
