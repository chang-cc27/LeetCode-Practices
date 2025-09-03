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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *temp_1 = list1, *temp_2 = list2;
        ListNode *ans = 0, *temp_a = 0;

        // 注意空list的情形
        if(list1 == 0 && list2 == 0) {
            return 0;
        }
        else if (list1 == 0 && list2 != 0) {
            return list2;
        }
        else if (list1 != 0 && list2 == 0) {
            return list1;
        }
        else {
            while(temp_1 != 0 && temp_2 != 0) {
                if (temp_1->val < temp_2->val) {
                    if(ans == 0) {
                        ans = temp_1;
                        temp_a = temp_1;
                    }
                    else {
                        temp_a->next = temp_1;
                        temp_a = temp_a->next;
                    }
                    temp_1 = temp_1->next;
                }
                else {
                    if(ans == 0) {
                        ans = temp_2;
                        temp_a = temp_2;
                    }
                    else {
                        temp_a->next = temp_2;
                        temp_a = temp_a->next;
                    }
                    temp_2 = temp_2->next;
                }
            }
            if(temp_1 == 0) {
                temp_a->next = temp_2;
            }
            else if(temp_2 == 0) {
                temp_a->next = temp_1;
            }
        }

        return ans;
    }
};
