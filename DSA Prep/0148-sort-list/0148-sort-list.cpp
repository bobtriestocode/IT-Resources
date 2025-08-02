/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {

    ListNode* mergeSortFunction(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode (-1);
        ListNode* temp = dummy;
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val <= l2->val) {
                temp->next = l1;
                l1 = l1->next;
            } else {
                temp->next = l2;
                l2 = l2->next;
            }
            temp = temp->next;
        }

        while (l1) {
            temp->next = l1;
            l1 = l1->next;
            temp = temp->next;
        }
        while (l2) {
            temp->next = l2;
            l2 = l2->next;
            temp = temp->next;
        }

        return dummy->next;
    }

    ListNode* middleEleFinder(ListNode* head) {
       
        ListNode* fast = head->next;
        ListNode* slow = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

public:
    ListNode* sortList(ListNode* head) {
 if ( head == nullptr || head->next == nullptr) return head;
        ListNode* mid = middleEleFinder(head);

        ListNode* right = mid->next;
        mid->next = nullptr;
        ListNode* left = head;

        right = sortList(right);
        left = sortList(left);

        return mergeSortFunction(left, right);
    }
};