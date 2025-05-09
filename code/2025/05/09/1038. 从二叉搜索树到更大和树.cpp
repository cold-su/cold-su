class Solution {
public:
	// 1038. 从二叉搜索树到更大和树
	TreeNode* bstToGst(TreeNode* root) {
		return convertBST(root);
	}

	// 538. 把二叉搜索树转换为累加树
	TreeNode* convertBST(TreeNode* r) {
		// at first we go to right subtree
		// then we go to root, finally go to left subtree
		// use a varialable to save the answer of every single node
		if (!r) {
			return nullptr;
		}
		auto R = convertBST(r->right);
		sum += r->val;
		// don't know the answer of left subtree now
		// but we can get it later, so there we just construct a nullptr, like a dummy
		auto res = new TreeNode(sum, nullptr, R);
		auto L = convertBST(r->left);
		res->left = L;
		return res;
	}
private:
	int sum = 0;
};