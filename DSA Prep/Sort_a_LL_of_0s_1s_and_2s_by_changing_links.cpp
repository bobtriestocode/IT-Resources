class Solution {
  public:
    Node* segregate(Node* head) {
    int count[3] = {0, 0, 0};
    Node* temp = head;

    // Count occurrences of 0s, 1s, and 2s
    while (temp != nullptr) {
        count[temp->data]++;
        temp = temp->next;
    }

    // Update the linked list with sorted values
    temp = head;
    for (int i = 0; i < 3; i++) {
        while (count[i] > 0) {
            temp->data = i;
            temp = temp->next;
            count[i]--;
        }
    }
    return head;
    }
};