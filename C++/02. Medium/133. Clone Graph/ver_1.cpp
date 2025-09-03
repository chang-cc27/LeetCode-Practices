/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
    // 共用 不能放cloneGraph裡 因為每次都會創新的map
    unordered_map<Node*, Node*> visited;
public:
    Node* cloneGraph(Node* node) {
        if(!node) return 0;
        if(visited.count(node)) return visited[node];

        Node* copy = new Node(node->val);
        visited[node] = copy;
        for(auto &nei : node->neighbors) {
            copy->neighbors.push_back(cloneGraph(nei));
        }
        return copy;        
    }
};
