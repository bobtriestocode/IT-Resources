/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
      
      DLLNode* prev = nullptr ; 
      while(head){
          DLLNode* next = head->next ; 
          head->next = prev;
          prev = head;
          head->prev = next;
          head=next;
      }
      return prev;
    }
};