class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to handle edge cases like deleting the head
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        // First pass: count the length of the list
        int length = 0;
        ListNode* temp = head;
        while (temp) {
            length++;
            temp = temp->next;
        }

        // Find the node just before the one to be deleted
        int target = length - n;
        temp = dummy;
        while (target--) {
            temp = temp->next;
        }

        // Delete the target node
        ListNode* del = temp->next;
        temp->next = temp->next->next;
        delete del;

        return dummy->next;
    }
};
