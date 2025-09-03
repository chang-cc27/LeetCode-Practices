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
    void reorderList(ListNode* head) {
        if (!head || !head->next) {
            return;
        }

        // 找中點
        ListNode *fast = head, *slow = head;
        while(fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 反轉後半部
        ListNode *prev = 0, *current = slow->next, *prece = slow->next->next;
        while(prece) {
            current->next = prev;
            prev = current;
            current = prece;
            prece = prece->next;
        }
        current->next = prev;
        slow->next = 0;     // 斷開鎖練

        // 合併
        ListNode *cur_1 = head;
        ListNode *cur_2 = current;
        while(cur_2) {
            ListNode *temp_1 = cur_1->next;
            ListNode *temp_2 = cur_2->next;

            cur_1->next = cur_2;
            cur_2->next = temp_1;

            cur_1 = temp_1;
            cur_2 = temp_2;
        }
    }
};
