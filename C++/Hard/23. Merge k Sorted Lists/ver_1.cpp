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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // 自訂義，把小的放最上面
        // 使用priority queue，預設是大的在上，可用cmp改掉
        struct cmp {
            bool operator()(ListNode *a, ListNode *b) {
                // 小的會到上面
                return a->val > b->val; 
            }
        };
        priority_queue<ListNode*, vector<ListNode*>, cmp> heap;

        // 把head node丟進去pq裡面排大小找head
        for (auto &head: lists) {
            if (head) {
                heap.push(head);
            }
        }
        if (heap.empty()) {
            return 0;
        }
        ListNode *head = heap.top();
        heap.pop();

        // 選中的head被拿走了 換成下一個點丟到heap裡面補滿
        ListNode *cur = head;
        if (cur->next != 0) {
            heap.push(cur->next);
        }
  
        //把剩餘的做完
        while (!heap.empty()) {
            ListNode *temp = heap.top();
            heap.pop();
            if (temp->next != 0) {
                heap.push(temp->next);
            }
            cur->next = temp;
            cur = cur->next;
        }
        return head;
    }
};
