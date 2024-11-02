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
	bool isSameTree(TreeNode* p, TreeNode* q) {
		std::vector<int> nums, __nums;
		solve(p, nums);
		solve(q, __nums);
		if (nums.size() != __nums.size())
			return false;

		if (p && q && p->val != q->val)
			return false;

		bool is = true;
		for (int i = 0; i < nums.size(); i++)
			if (nums[i] != __nums[i])
				is = false;

		return is;
	}

	void solve(TreeNode* root, std::vector<int>& nums) {

		if (!root)
			return;

		nums.push_back((!root->left ? (int) INT_MIN : (int) root->left->val));
		nums.push_back((!root->right ? (int) INT_MIN : (int) root->right->val));

		solve(root->left, nums);
		solve(root->right, nums);
	}
};