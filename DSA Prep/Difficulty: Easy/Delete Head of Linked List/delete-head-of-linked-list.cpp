// User function Template for C++

/*
struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};

*/
// Complete this function
Node *deleteHead(Node *head) {
    // Your code here
   Node* del = head->next ; 
   delete(head);
   head=del;
   return head;
}
