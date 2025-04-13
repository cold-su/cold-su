/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
	std::vector<int> ans;
	vector<int> preorder(Node* root) {
		dfs(root);
		return ans;
	}
	void dfs(Node* r) {
		if (not r) {
			return;
		}
		ans.push_back(r->val);
		for (Node* c : r->children) {
			dfs(c);
		}
	}
};