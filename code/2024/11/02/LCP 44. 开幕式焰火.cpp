/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int numColor(TreeNode* root) {
    	std::map<int, int> map;
    	__solve(root, map);

    	return map.size();
    }

    void __solve(TreeNode* root, std::map<int, int>& map) {
    	if (!root) {
    		return;
    	}
    	map[root->val]++;
    	__solve(root->left, map);
    	__solve(root->right, map);
    }
};