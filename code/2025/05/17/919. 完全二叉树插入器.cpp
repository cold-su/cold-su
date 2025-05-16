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
class CBTInserter {
private:
	std::deque<std::pair<TreeNode*, TreeNode*>> s;
	TreeNode* root;
public:
	CBTInserter(TreeNode* root) {
		this->root = root;
		s.emplace_back(nullptr, root);
		while (s.size()) {
			auto [_, p] = s.front();
			if (!p) {
				break;
			}
			s.pop_front();
			s.emplace_back(p, p->left);
			s.emplace_back(p, p->right);
		}
	}
	
	int insert(int val) {
		auto [fa, _] = s.front();
		if (fa->left) {
			fa->right = new TreeNode(val);
			s.emplace_back(fa->right, fa->right->left);
			s.emplace_back(fa->right, fa->right->right);
		} else {
			fa->left = new TreeNode(val);
			s.emplace_back(fa->left, fa->left->left);
			s.emplace_back(fa->left, fa->left->right);
		}
		s.pop_front();
		return fa->val;
	}
	
	TreeNode* get_root() {
		return root;
	}
};

/**
 * Your CBTInserter object will be instantiated and called as such:
 * CBTInserter* obj = new CBTInserter(root);
 * int param_1 = obj->insert(val);
 * TreeNode* param_2 = obj->get_root();
 */