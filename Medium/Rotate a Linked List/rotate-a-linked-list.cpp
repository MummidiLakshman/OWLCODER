//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/


class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(head->next==NULL) return head;
        Node* temp1=head;
        int c=0;
        while(temp1->next!=NULL)
        {
            temp1=temp1->next;
            c+=1;
        }
       // cout << c << " ";
        c+=1;
        if(c==k) return head;
        Node* temp=head;
        Node *t1=NULL;
        Node* temp2;
        //int c=0,s=k;
        while(temp and k--)
        {
            Node *NN=new Node(temp->data);
            if(t1==NULL)
            {
                t1=NN;
                temp2=t1;
            }
            else
            {
                temp2->next=NN;
                temp2=temp2->next;
            }
            temp=temp->next;
            //c+=1;
        }
       // cout << c  << " ";
         //c+=1;
        //if(c==k) return t1;
        Node* t=temp;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=t1;
        return t;
    }
};
    


//{ Driver Code Starts.

void printList(Node *n)
{
    while (n != NULL)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, val, k;
        cin>>n;
        
        cin>> val;
        Node *head = new Node(val);
        Node *tail = head;
        
        for(int i=0; i<n-1; i++)
        {
            cin>> val;
            tail->next = new Node(val);
            tail = tail->next;
        }
        
        cin>> k;
        
        Solution ob;
        head = ob.rotate(head,k);
        printList(head);
    }
    return 1;
}

// } Driver Code Ends