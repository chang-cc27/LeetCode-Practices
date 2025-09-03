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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head || (!head->next && n == 1)) {
            return head = 0;
        }
        ListNode *current = head;
        int count = 0;
        while(current) {
            current = current->next;
            count++;
        }

        if(count == n) {
            return head->next;
        }

        int target = count-n-1;
        current = head;
        while(target > 0) {
            current = current->next;
            target--;
        }
        current->next = current->next->next;
        return head;
    }
};
