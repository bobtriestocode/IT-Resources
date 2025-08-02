
class Solution {
  public:
        
   void reverseLL (Node*& head){
        Node* current = head; 
        Node* previous = nullptr; 
        
        while (current) {
            Node* next = current->next;
            current->next = previous; 
            previous = current; 
            current = next;
        }
        head = previous;
    }
    
    Node* addOne(Node* head) {
        if (head == nullptr) {
            return new Node(1); // Handle empty list
        }
        
        reverseLL(head); 
        int carry = 1; 
        Node* temp = head; 
        Node* prev = nullptr; // Track previous node for carry propagation
        
        while (temp) {
            int sum = temp->data + carry;
            temp->data = sum % 10;
            carry = sum / 10;
            prev = temp; // Update previous node
            temp = temp->next; 
        }
        
        // Handle leftover carry
        if (carry) {
            prev->next = new Node(carry);
            prev = prev->next; 
            prev->next= nullptr;
        }
        
        reverseLL(head); // Reverse back to original order
        return head;
    }
};