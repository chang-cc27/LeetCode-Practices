/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        // LONG_MIN和LONG_MAX是是 C++ 在 <climits>（或 <limits.h>）裡的常數巨集
       return validate(root, LONG_MIN, LONG_MAX);
    }

    bool validate(TreeNode* node, long minVal, long maxVal) {
        if (!node) return true; // 空樹一定是 BST

        if (node->val <= minVal || node->val >= maxVal) {
            return false; // 違反 BST 規則，不在區間內
        }

        // 左子樹最大值要比 node->val 小 => 介於最小值和node的值
        // 右子樹最小值要比 node->val 大 => 介於node的值和最大值之間
        return validate(node->left, minVal, node->val) && validate(node->right, node->val, maxVal);
    }
};
