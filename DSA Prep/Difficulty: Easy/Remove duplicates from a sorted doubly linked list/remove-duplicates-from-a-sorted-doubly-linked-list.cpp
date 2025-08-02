/*
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }

};
*/

class Solution {
  public:

    Node *removeDuplicates(struct Node *head) {
        Node* temp = head ; 
        int ele = -1;
       
        while(temp){
            if(ele!=temp->data){
                ele=temp->data;
            temp = temp->next;
            }
            else{
                Node* nextNode = temp->next;
                Node* prev = temp->prev;
                
                if(prev) prev->next = nextNode;
                if(nextNode) nextNode->prev = prev;
                delete temp;
                temp = nextNode;
            }
        }
        return head;
    }
};