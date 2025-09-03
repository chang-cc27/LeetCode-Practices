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
    ListNode* reverseList(ListNode* head) {
        if(head == 0 || head->next == 0) {
            return head;
        }
        ListNode *current = head;
        ListNode *prev = 0, *prece = head->next;
        while(prece != 0) {
            current->next = prev;
            prev = current;
            current = prece;
            prece = prece->next;
        }
        current->next = prev;
        head = current;

        return head;
    }
};
