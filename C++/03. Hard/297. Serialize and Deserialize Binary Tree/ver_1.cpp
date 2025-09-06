/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
private:
    string data;
public:
    void pre_order(TreeNode* root) {
        if (!root) {
            data += "#,";
            return;
        }
        data += to_string(root->val) + ",";
        pre_order(root->left);
        pre_order(root->right);
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        data.clear();
        pre_order(root);
        return data;

    }

    TreeNode* build_a_tree(stringstream &ss) {
        string token;
        if (!getline(ss, token, ',')) return nullptr;

        if (token == "#") return nullptr;

        int val = stoi(token);
        TreeNode* root = new TreeNode(val);
        root->left = build_a_tree(ss);
        root->right = build_a_tree(ss);
        return root;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return build_a_tree(ss);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
