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
public:

    ListNode* reverse(ListNode* head) {
        ListNode* front = nullptr;
        ListNode* prev = nullptr;
        ListNode* temp = head;
        while (temp != nullptr) {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }

    int pairSum(ListNode* head) {
        ListNode* h1 = head;
        ListNode* fast = head;
        ListNode* slow = head;
        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* h2 = reverse(slow);
        int sum = 0;
        while (h1 != nullptr && h2 != nullptr) {
            sum = max(sum, h1->val + h2->val);
            h1 = h1->next;
            h2 = h2->next;
        }
        return sum;
    }
};