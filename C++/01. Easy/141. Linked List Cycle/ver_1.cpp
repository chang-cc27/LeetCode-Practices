/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> seen;
        ListNode *current = head;

        while (current != 0) {
            if (seen.count(current)) {
                return true; // 之前走過這個節點，代表有環
            }
            seen.insert(current);
            current = current->next;
        }
        return false; // 走到 nullptr，代表沒環
    }
};
